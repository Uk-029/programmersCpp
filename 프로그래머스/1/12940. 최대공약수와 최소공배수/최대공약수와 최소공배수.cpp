#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    int gcd, lcm;                               // gcd - 최대공약수, lcm - 최소공배수
    
    for(size_t i = 1; i <= min(n, m); i++)   {
        if(n % i == 0 && m % i == 0)    {
            gcd = i;
        }
    }
    lcm = n / gcd * m;

    return vector<int> {gcd, lcm};
}