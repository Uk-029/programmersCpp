#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp = "";
    
    for(size_t i{}; i < my_str.size(); i++) {
        temp += my_str[i];
        
        if(temp.size() == n)    {
            answer.emplace_back(temp);
            temp.erase();
        }
    }
    
    if(!temp.empty())   {
        answer.emplace_back(temp);
    }

    return answer;
}