#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row = arr.size();               //행
    int col = arr[0].size();            //열
    
    if(row > col)   {
        for(int i{}; i < row; i++)    {
            arr[i].resize(row, 0);
        }
    }
    else if(row < col)    {
        for(int i{}; i < col - row; i++)    {
            arr.emplace_back(vector<int> (col, 0));
        }
    }
    
    return arr;
}