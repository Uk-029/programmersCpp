#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    while(1)    {
        vector<int> temp = arr;
        for(int& n: arr)    {
            if(n >= 50 && n % 2 == 0)   n /= 2;
            else if(n < 50 && n % 2 != 0) n = 2 * n + 1;
        }
        if(temp == arr) break;
        answer++;
    }
    return answer;
}