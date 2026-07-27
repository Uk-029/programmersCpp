#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    for(int i{}; i < arr.size(); i++)   {
        for(int j{}; j < arr.size(); j++)   {
            if(arr[i][j] != arr[j][i])  {
                answer = 0;
            }
        }
    }
    return answer;
}