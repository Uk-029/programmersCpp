#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for(size_t i{}; i < arr.size(); i++)    {
        if(stk.empty()) {
            stk.push_back(arr[i]);
        }
        else if(stk.back() < arr[i])    {
            stk.push_back(arr[i]);
        }
        else if(stk.back() >= arr[i])    {
            stk.pop_back();
            i--;
        }
    }
    return stk;
}