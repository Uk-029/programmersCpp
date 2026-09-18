#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string base3 = "";
    
    while(n > 0)   {
        base3 += (n % 3) + '0';
        n /= 3;
    }
    
    reverse(base3.begin(), base3.end());
    
    int sq = 1;
    for(size_t i{}; i < base3.size(); i++)  {
        answer += sq * (base3[i] - '0');
        sq *= 3;
    }
        
    return answer;
}