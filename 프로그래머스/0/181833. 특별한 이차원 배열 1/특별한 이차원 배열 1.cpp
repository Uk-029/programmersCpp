#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n));
    
    for(int i{}; i < n; i++)    {
        for(int j{}; j < n; j++)    {
            i == j ? answer[i][j] = 1 : answer[i][j] = 0;
        }
    }
    
    return answer;
}