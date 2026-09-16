#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(size_t i{}; i < commands.size(); i++)   {
        vector<int> sub_array(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        sort(sub_array.begin(), sub_array.end());
        answer.emplace_back(sub_array[commands[i][2] - 1]);
    }
    
    return answer;
}