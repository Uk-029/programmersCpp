#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int iterA = 0, iterB = 1;
    
    for(int i = 2; i <= n; i++)    {
        answer = (iterA + iterB) % 1234567;
        iterA = iterB;
        iterB = answer;
    }
    
    return answer;
}