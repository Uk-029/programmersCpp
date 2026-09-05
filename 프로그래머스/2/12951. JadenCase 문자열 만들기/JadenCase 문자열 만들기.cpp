#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    s[0] = toupper(s[0]);
    for(size_t i{}; i < s.size()-1; i++)    {
        answer += s[i];
        if(s[i] == ' ') {
            s[i+1] = toupper(s[i+1]);
        }
        else    {
            s[i+1] = tolower(s[i+1]);
        }
    }
    answer += s.back();
    
    return answer;
}