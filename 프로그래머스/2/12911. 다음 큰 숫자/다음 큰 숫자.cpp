#include <string>
#include <algorithm>

using namespace std;

int solution(int n) {
    string binary;
    
    for (int i = n; i > 0; i /= 2) {
        binary += '0' + i % 2;
    }
    reverse(binary.begin(), binary.end());    
    
    int oneCount = 0;
    for(const char& c: binary)  {
        if(c == '1') oneCount++;
    }
    
    for (int i = n + 1; ; i++) {
        string nextBinary;

        for (int j = i; j > 0; j /= 2) {
            nextBinary += '0' + j % 2;
        }
        reverse(nextBinary.begin(), nextBinary.end());

        int nextOneCount = 0;

        for (char c : nextBinary) {
            if (c == '1') nextOneCount++;
        }

        if (oneCount == nextOneCount) {
            return i;
        }
    }
}