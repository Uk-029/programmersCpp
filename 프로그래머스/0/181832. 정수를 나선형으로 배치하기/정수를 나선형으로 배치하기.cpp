#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n));
    
    int x = 0;
    int y = 0;
    int dir = 0;
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int num = 1; num <= n * n; num++)  {
        answer[y][x] = num;
        
        if (num == n * n)
            break;
        
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        if(nx < 0 || nx >= n || ny < 0 || ny >= n || answer[ny][nx] != 0)  {
            dir = (dir + 1) % 4;
        }
        
        x += dx[dir];
        y += dy[dir];
    }
    
    return answer;
}