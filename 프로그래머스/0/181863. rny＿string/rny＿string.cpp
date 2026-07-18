#include <string>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(int i{}; i < rny_string.size(); i++)    {
        if(rny_string[i] == 'm')    answer += "rn";
        else answer += rny_string[i];
    }
    return answer;
}