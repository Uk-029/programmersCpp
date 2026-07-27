#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    for(int i{}; i < board.size(); i++) {
        for(int j{}; j < board[i].size(); j++)  {
            if(i + j <= k)  answer += board[i][j];
        }
    }
    return answer;
}