#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    sort(array.begin(), array.end());
    
    int arr[1001]{};
    int temp{};
    int freq{};
    
    for(int i{}; i < array.size(); i++)   { arr[array[i]]++; }
    for(int i{}; i < sizeof(arr)/sizeof(int); i++)   {
        if(arr[i] > temp)   {
            temp = arr[i];
            freq = i;
        }
        else if(arr[i] == temp && temp != 0)   freq = -1;
    }
    return freq;
}