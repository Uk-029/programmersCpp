#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int n = i; n <= j; n++)  {
        string str = to_string(n);
        
        for(const char& c: str) {
            if(c == k + '0')  {
                answer++;
            }
        }
    }
    
    return answer;
}