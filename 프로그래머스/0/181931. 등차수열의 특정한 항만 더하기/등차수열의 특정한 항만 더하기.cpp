#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int res{};
    for(int i{}; i < included.size(); i++)  {
        while(included[i])  {
            res += a + d * i;
            break;
        }
    }
    return res;
}