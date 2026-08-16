#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    int maxNum = array[0];
    int tmp = 0;
    int maxIdx = 0;
    
    for(int i{}; i < array.size(); i++) {
        tmp = array[i];
        
        if(tmp > maxNum)   {
            maxNum = tmp;
            maxIdx = i;
        }
    }
    
    return vector<int> {maxNum, maxIdx};
}