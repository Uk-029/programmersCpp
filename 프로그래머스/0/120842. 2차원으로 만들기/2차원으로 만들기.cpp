#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    for(int i{}; i < num_list.size(); i += n)   {
        vector<int> row;
        
        for(int j{i}; j < i + n; j++)   {
            row.emplace_back(num_list[j]);
        }
        
        answer.emplace_back(row);
    }
    
    return answer;
}