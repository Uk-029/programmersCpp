#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(size_t i{}; i < absolutes.size(); i++)  {
        if(signs[i] == true)    {
            answer += absolutes[i];
        }
        else if(signs[i] == false)  {
            answer -= absolutes[i];
        }
    }
    
    return answer;
}