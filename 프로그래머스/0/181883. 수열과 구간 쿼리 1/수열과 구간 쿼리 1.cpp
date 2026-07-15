#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i{}; i < queries.size(); i++)   {
        for(int j{}; j < arr.size(); j++)   {
            if(queries[i][0] <= j && j <= queries[i][1])  {
                arr[j]++;
            }
        }
    }
    
    return arr;
}