#include <iostream>

using namespace std;
int solution(int n) {
    int answer = 0;
    int num = n;
    
    for(size_t i{}; i < to_string(n).size(); i++)  {
        answer += num % 10;
        num /= 10;
    }

    return answer;
}