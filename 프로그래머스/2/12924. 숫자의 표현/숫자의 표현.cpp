#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int result = 0;

    for (int len = 1; len * (len + 1) / 2 <= n; len++) {
        int x = 2 * n / len;
        
        if (2 * n % len == 0) {
            int start = (x - len + 1) / 2;
            
            if (start >= 1 && (x - len + 1) % 2 == 0) {
                result++;
            }
        }
    }

    
    return result;
}