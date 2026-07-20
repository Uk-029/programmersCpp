#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tamp = "";
    for(char c: my_string)  {
        if(c == ' ') {
            answer.push_back(tamp);
            tamp.clear();
        }
        else if(c != ' ')    {
            tamp += c;
        }
    }
    answer.push_back(tamp);
    return answer;
}