#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt{};
    for(char c: myString)   {
        if(c != 'x') {
            cnt++;
        }
        else if(c == 'x')   {
            answer.push_back(cnt);
            cnt = 0;
        }
    }
    answer.push_back(cnt);
    return answer;
}