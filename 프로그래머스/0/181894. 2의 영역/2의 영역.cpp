#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer, range;
    
    for(int i{}; i < arr.size(); i++)   {
        if(arr[i] == 2) range.push_back(i);
    }
    
    if(!range.empty())  {
        for(int i{range.front()}; i <= range.back(); i++)   {
            answer.push_back(arr[i]);
        }
    }
    else answer.push_back(-1);
        
    return answer;
}