#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i{};
    for(;;) {
        i++;
        if(n % 6 == 0)  return n / 6;
        else if(6 * i % n == 0) return i;
    }
}