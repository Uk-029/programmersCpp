#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    for(hp; hp >= 5; hp -= 5)    {
        answer++;
    }
    
    for(hp; hp >= 3; hp -= 3)    {
        answer++;
    }
    
    for(hp; hp >= 1; hp -= 1)    {
        answer++;
    }
    
    return answer;
}