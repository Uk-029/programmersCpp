#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());

    int minGap = array[0] < n ? n - array[0] : array[0] - n;
    int answer = array[0];
        
    for(const int& arr: array)  {
        int numGap = arr < n ? n - arr : arr - n;
        
        if(numGap < minGap) {
            minGap = numGap;
            answer = arr;
        }
    }
    
    return answer;
}