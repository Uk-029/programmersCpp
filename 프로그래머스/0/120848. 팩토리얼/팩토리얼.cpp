#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int num = 1;
    int max_fact = 0;
    
    for(int i = 1; i <= n; i++) {
        num *= i;
        
        if(num <= n) {
            max_fact = i;
        }
        else if(num > n)   {
            break;
        }
    }
    
    return max_fact;
}