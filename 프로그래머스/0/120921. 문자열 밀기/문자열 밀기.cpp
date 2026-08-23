#include <string>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    
    for(size_t i{}; i < A.size(); i++)  {
        if(A == B)  {
            break;
        }
        rotate(A.begin(), A.end() - 1, A.end());
        answer++;
    }
    
    if(A != B)  {
        answer = -1;
    }
    
    return answer;
}