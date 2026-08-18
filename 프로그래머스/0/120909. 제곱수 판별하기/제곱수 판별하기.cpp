#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    for(size_t i{}; i*i <= n; i++) {
        if(i*i == n)    {
            answer = 1;
        }
    }
    return answer;
}