#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int n = (2*total - num*num + num) / (2*num);
    
    for(int i = 0; i < num; i++)    {
        answer.emplace_back(n);
        n++;
    }
    
    return answer;
}