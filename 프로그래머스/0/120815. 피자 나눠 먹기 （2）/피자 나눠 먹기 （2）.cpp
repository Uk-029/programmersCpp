#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i{};                    //피자판수
    for(;;) {
        i++;
        if(6 * i % n == 0) return i;
    }
}