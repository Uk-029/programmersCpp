#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> cnt(31);

    for(const auto& str: strArr)
        ++cnt[str.size()];

    return *max_element(cnt.begin(), cnt.end());
}