#include <algorithm>

using namespace std;

int solution(int a, int b) {
    
    if(a % 2 != 0 && b % 2 != 0)            //a와 b 모두 홀수라면
        return a*a + b*b;    
    
    else if((a + b) % 2 != 0)               //a와 b 중 하나만 홀수라면
        return 2 * (a + b);
    
    else                                    //a와 b 모두 홀수가 아니라면
        return max(a, b) - min(a, b);
}