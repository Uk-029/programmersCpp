#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    int cnt = 0;
    for(const char c: s)    {
        if(c == '(')    {
            cnt++;
        }
        else if(c == ')')    {
            cnt--;
        }
        
        if(cnt < 0) {
            answer = false;
            break;
        }
    }
    
    if(cnt != 0) {
        answer = false;
    }

    return answer;
}