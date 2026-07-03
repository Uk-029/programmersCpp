#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for(auto que: queries)  {
        reverse(my_string.begin() + que[0], my_string.begin() + que[1] + 1);
    }
    return my_string;
}