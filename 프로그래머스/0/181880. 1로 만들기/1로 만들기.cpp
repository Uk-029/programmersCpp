#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int& n: num_list)   {
        while(true)    {
            if(n == 1) break;
            else if(n % 2 == 0)  {n/=2; answer++;}
            else if(n % 2 != 0) {n=(n-1)/2; answer++;}
        }
    }
    return answer;
}