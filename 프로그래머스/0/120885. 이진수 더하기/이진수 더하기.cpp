#include <string>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int carry = 0;
    size_t len = max(bin1.size(), bin2.size());
    
    bin1.insert(0, len - bin1.size(), '0');
    bin2.insert(0, len - bin2.size(), '0');
    
    for(int i = len - 1; i >= 0; i--)   {
        int sum = (bin1[i] - '0') + (bin2[i] - '0') + carry;
        
        answer += char(sum % 2 + '0');
        carry = sum / 2;
    }
    if (carry)  {
        answer += '1';    
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}