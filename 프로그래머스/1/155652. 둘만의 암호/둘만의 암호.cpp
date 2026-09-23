#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    for(size_t i{}; i < skip.size(); i++)   {
        for(size_t j{}; j < alphabet.size(); j++)   {
            if(skip[i] == alphabet[j])  {
                alphabet.erase(j, 1);
                break;
            }
        }
    }
    
    for(size_t i{}; i < s.size(); i++)  {
        for(size_t j{}; j < alphabet.size(); j++)   {
            if(s[i] == alphabet[j]) {
                answer += alphabet[(j + index) % alphabet.size()];
                break;
            }
        }
    }
    
    return answer;
}