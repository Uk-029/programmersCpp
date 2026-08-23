#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for(int x{}; x < board.size(); x++) {
        for(int y{}; y < board.size(); y++) {
            if(board[x][y] != 1) continue;
            
            for(int i{}; i < 8; i++)    {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(board[nx][ny] == 0 && nx >= 0 && ny >= 0 && nx < board.size() && ny < board.size())  {
                    board[nx][ny] = -1;
                }
            }
        }
    }
    
    int safeZoneCount = 0;
    for(int x{}; x < board.size(); x++) {
        for(int y{}; y < board.size(); y++) {
            if(board[x][y] == 0)    safeZoneCount++;
        }
    }
    
    return safeZoneCount;
}