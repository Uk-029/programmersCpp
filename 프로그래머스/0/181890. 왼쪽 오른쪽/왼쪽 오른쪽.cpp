#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer{};
    int idx{};
    
    for(int i{}; i < str_list.size(); i++)  {
        if(str_list[i] == "l")  {
            idx = i;
            break;
        }
        else if(str_list[i] == "r") {
            idx = i;
            break;
        }
    }
    
    if(str_list[idx] == "l")    {
        for(int i{}; i < idx; i++)  {
            answer.push_back(str_list[i]);
        }
    }
    else if(str_list[idx] == "r")   {
        for(int i{idx + 1}; i < str_list.size(); i++)   {
            answer.push_back(str_list[i]);
        }
    }
    
    return answer;
}