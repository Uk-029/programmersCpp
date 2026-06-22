#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    string A = to_string(a);
    string B = to_string(b);
    string sum1 = A + B;
    string sum2 = B + A;
    
    if(sum1 > sum2) answer = stoi(sum1);
    else    answer = stoi(sum2);
    
    return answer;
}