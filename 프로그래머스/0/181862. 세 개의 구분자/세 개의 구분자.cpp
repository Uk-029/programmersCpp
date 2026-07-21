#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp{};
    for(char c: myStr)  {
        if((c == 'a' || c == 'b' || c == 'c') && !temp.empty()) {
            answer.push_back(temp);
            temp.clear();
        }
        else if(c != 'a' && c != 'b' && c != 'c')   {
            temp += c;
        }
    }
    if(!temp.empty())   answer.push_back(temp);
    else if(answer.empty()) answer.push_back("EMPTY");
    return answer;
}