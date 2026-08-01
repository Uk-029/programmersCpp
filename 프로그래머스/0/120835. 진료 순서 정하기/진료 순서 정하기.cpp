#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> temp = emergency;
    
    sort(temp.begin(), temp.end(), greater<int>());
    
    for(int i{}; i < emergency.size(); i++)  {
        for(int j{}; j < temp.size(); j++)  {
            if(emergency[i] == temp[j])  {
                answer.emplace_back(j + 1);
                break;
            }
        }
    }
    
    return answer;
}