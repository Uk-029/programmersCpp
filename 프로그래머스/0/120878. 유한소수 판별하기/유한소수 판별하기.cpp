#include <string>
#include <numeric>

using namespace std;

int solution(int a, int b) {
    int answer = 1;
    int gcdNum = gcd(a, b);

    b /= gcdNum;
    
    while(b % 2 == 0)   {
        b /= 2;
    }
    
    while(b % 5 == 0)   {
        b /= 5;
    }
    
    b == 1 ? answer = 1 : answer = 2;
    
    return answer;
}