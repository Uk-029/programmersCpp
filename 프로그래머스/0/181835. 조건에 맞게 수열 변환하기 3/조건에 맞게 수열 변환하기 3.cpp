#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    
    for(int& n: arr)  {
        k % 2 != 0 ? n*=k : n+=k;
    }
    
    return arr;
}