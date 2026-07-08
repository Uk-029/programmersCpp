#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;
    string temp{};
    for(int i = e; i >= s; i--) {
        temp += (my_string[i]);
    }
    
    answer.replace(s, e-s+1, temp);
    
    return answer;
}