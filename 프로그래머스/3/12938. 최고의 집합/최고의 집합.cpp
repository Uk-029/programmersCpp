#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
    if (s < n) return {-1};

    vector<int> answer;
    
    int q = s / n;              //몫
    int r = s % n;              //나머지
    
    for (int i = 0; i < n - r; i++)
        answer.push_back(q);
    
    for (int i = 0; i < r; i++)
        answer.push_back(q + 1);
     
    return answer;
}