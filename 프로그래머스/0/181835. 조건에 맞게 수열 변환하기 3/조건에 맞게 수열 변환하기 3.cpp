#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    if(k % 2 != 0)  {
        for(const int& n: arr)  {
            answer.emplace_back(n*k);
        }
    }
    
    else    {
        for(const int& n: arr)  {
            answer.emplace_back(n+k);
        }
    }
    
    return answer;
}