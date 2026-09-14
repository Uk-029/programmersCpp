#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    if(common[1] - common[0] == common[2] - common[1])  {
        int d = common[1] - common[0];
        answer = common.back() + d;
    }
    else if(common[1] / common[0] == common[2] / common[1]) {
        int r = common[1] / common[0];
        answer = common.back() * r;
    }
    
    return answer;
}