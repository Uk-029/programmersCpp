#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int arrSize[31]{0};
    
    for(string str: strArr) {
        arrSize[str.size()]++;
    }
    
    return *max_element(arrSize, arrSize + 31);
}