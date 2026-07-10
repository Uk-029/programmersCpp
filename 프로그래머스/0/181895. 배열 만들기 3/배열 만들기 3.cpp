#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for(int i{}; i < intervals.size(); i++) {
        answer.insert(answer.end(), arr.begin() + intervals[i][0], arr.begin() + intervals[i][1] + 1);
    }
    
    return answer;
}