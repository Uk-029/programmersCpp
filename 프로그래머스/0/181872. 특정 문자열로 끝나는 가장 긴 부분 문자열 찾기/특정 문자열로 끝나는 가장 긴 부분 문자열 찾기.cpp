#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    size_t idx{myString.rfind(pat)};
    if(pat.size() > 1) idx = idx += (pat.end() - pat.begin() - 1) ;
    for(int i{}; i <= idx; i++)   {
        answer += myString[i];
    }
    return answer;
}