#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> ans{};
    for(const auto& q: queries) {
        
        int s = q[0];
        int e = q[1];
        int k = q[2];
        
        int mn = -1;
        
        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                if (mn == -1 || arr[i] < mn) {
                    mn = arr[i];
                }
            }
        }
        
        ans.push_back(mn);
    }
    return ans;
}