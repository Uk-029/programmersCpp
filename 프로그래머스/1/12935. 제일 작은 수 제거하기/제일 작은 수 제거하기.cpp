#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<pair<int, int>> pairs;
    
    if(arr.size() == 1) {
        answer.emplace_back(-1);
        arr.clear();
    }
    else    {
        for(int i{}; i < arr.size(); i++)   {
            pairs.emplace_back(arr[i], i);
        }
        sort(pairs.begin(), pairs.end());
        arr.erase(arr.begin() + pairs[0].second);
    }
    
    for(int i{}; i < arr.size(); i++)   {
        answer.emplace_back(arr[i]);
    }
    
    return answer ;
}