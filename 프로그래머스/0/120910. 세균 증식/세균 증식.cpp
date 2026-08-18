#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    for(size_t i = 1; i <= t; i++)  {
        n *= 2;
    }
    return n;
}