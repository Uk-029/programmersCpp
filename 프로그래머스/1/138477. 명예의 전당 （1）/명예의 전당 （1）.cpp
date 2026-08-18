#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    
    for(size_t i{}; i < score.size(); i++)  {
        temp.emplace_back(score[i]);
        sort(temp.begin(), temp.end(), greater<int>());
        if(temp.size() <= k)    {
            answer.emplace_back(temp.back());
        }
        else if(temp.size() > k)    {
            answer.emplace_back(temp[k-1]);
        }
    }
    
    return answer;
}