#include <string>
#include <vector>

//약수의 갯수가 홀수인 경우는 제곱수인 경우밖에 없다.

using namespace std;

int solution(int left, int right) {
    int result = 0;
    
    for(int i = left; i <= right; i++)  {
        result += i;
        
        for(int j = 1; j*j <= i; j++)    {
            if(j*j == i)    {
                result -= 2 * i;
                break;
            }
        }
    }
    
    return result;
}