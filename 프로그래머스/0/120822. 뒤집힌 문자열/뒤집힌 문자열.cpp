#include <string>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(const auto& str: my_string) {
        answer.insert(answer.begin(), str);
    }
    
    return answer;
}