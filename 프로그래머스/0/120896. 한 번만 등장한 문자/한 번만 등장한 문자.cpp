#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int alphabet[26]{};
    
    for(const char& c: s)   {
        alphabet[c - 'a']++;
    }
    
    for(int i{}; i < sizeof(alphabet) / sizeof(alphabet[0]); i++)  {
        if(alphabet[i] == 1)    {
            answer += i + 'a';
        }
    }
    
    return answer;
}