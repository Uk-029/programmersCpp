#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int balls, int share) {
    double answer = 1;
    share = min(share, balls-share);
    
    for (int i = 1; i <= share; i++)
        answer = answer * (balls - share + i) / i;
    
    return answer;
}