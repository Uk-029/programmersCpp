#include <string>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i{}; i < myString.size(); i++)  {
        if(myString[i] <= 'l') answer += 'l';
        else answer += myString[i];
    }
    return answer;
}