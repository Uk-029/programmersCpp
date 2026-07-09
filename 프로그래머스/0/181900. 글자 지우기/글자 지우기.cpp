#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end(),
        [](int a, int b) {
            return a > b;
        });
    
    for(int i{}; i < indices.size(); i++)   {
        my_string.erase(indices[i], 1);
    }
    
    return my_string;
}