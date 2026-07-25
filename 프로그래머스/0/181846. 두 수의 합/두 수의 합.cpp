#include <string>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    
    size_t lenDiffer = max(a.size(), b.size()) - min(a.size(), b.size());
    string zero(lenDiffer, '0');
        
    if(a.size() < b.size())
        a = zero + a;
    else if(a.size() > b.size())
        b = zero + b;
    
    int carry = 0;
    for(int i = a.size() - 1; i >= 0; i--)  {
        int a1 = a[i] - '0';
        int b1 = b[i] - '0';
        int sum = a1 + b1 + carry;
        
        answer += char(sum % 10 + '0');
        carry = sum / 10;
    }
    if(carry)   
        answer += char(carry + '0');
    
    reverse(answer.begin(), answer.end());
        
    return answer;
}