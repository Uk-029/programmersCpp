#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;        //0~9까지의 모든 수의 합
    
    for(const int& num: numbers)    {
        answer -= num;
    }
    
    return answer;
}