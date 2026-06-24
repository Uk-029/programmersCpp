#include <string>
#include <vector>
#include <numeric> // std::gcd

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int num = (numer1 * denom2) + (numer2 * denom1);
    int denom = denom1 * denom2;
    int g = gcd(num, denom);
    int result_num = num/g;
    int result_denom = denom/g;
    return {result_num, result_denom};
}