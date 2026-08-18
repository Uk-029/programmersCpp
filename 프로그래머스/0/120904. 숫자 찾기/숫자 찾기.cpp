#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string str = to_string(num);
    for(int i{}; i < str.size(); i++)   {
        if(str[i] - '0' == k) {
            return i + 1;
        }
    }
    return -1;
}