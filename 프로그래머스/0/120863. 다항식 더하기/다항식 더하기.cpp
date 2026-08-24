#include <string>
#include <algorithm>

using namespace std;

string solution(string polynomial) {
    int xCoefficient = 0;           //  x의 계수
    int constant = 0;               //  상수
    
    string term;                    //  처리 중인 항
    
    for(char c: polynomial) {
        if (c == ' ')
            continue;
        
        if(c == '+')    {
            if(term == "x") {
                xCoefficient++;
            }
            else if(term.find('x') != string::npos) {
                int xPos = term.find('x');              // x의 위치
                string number = term.substr(0, xPos);   // x항의 계수
                xCoefficient += stoi(number);
            }
            else if(!term.empty())  {
                constant += stoi(term);
            }
            
            term.erase();
        }
        else {
            term += c;
        }
    }
    
    //마지막 항 처리
    if(term == "x") {
        xCoefficient++;
    }
    else if(term.find('x') != string::npos) {
        int xPos = term.find('x');
        string number = term.substr(0, xPos);
        xCoefficient += stoi(number);
    }
    else if(!term.empty())  {
        constant += stoi(term);
    }
    
    string result = "";
    if (xCoefficient > 0) {
        if (xCoefficient == 1)
            result += "x";
        else
            result += to_string(xCoefficient) + "x";

        if (constant > 0)
            result += " + " + to_string(constant);
    }
    else {
        result += to_string(constant);
    }

    return result;
}