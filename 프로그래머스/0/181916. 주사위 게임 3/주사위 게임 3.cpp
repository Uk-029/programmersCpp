#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int solution(int a, int b, int c, int d) {
    int cnt[7]{};
    int p{}, q{}, r{};
    
    cnt[a]++;
    cnt[b]++;
    cnt[c]++;
    cnt[d]++;
//---------------------------------------------------------------------------------------        
    for(int i{1}; i <= 6; i++)   {
        if(cnt[i] == 4) return 1111*i;
    }
//---------------------------------------------------------------------------------------
    for(int i{1}; i <= 6; i++)   {
        if(cnt[i] == 3) p = i;
        else if(cnt[i] == 1) q = i;
    }
    if(p != 0)  return (10*p+q)*(10*p+q);
//---------------------------------------------------------------------------------------
    vector<int> two;
    for(int i{1}; i <= 6; i++)   {
        if(cnt[i] == 2) two.push_back(i);
    }
    if(two.size() == 2) return (two[0] + two[1]) * abs(two[0] - two[1]);
//---------------------------------------------------------------------------------------
    vector<int> twoNone;
    for(int i{1}; i <= 6; i++)  {
        if(cnt[i] == 1) twoNone.push_back(i);
    }
    if(twoNone.size() == 2) return twoNone[0] * twoNone[1];
//---------------------------------------------------------------------------------------
    vector<int> one;
    for(int i{1}; i <= 6; i++)
        if(cnt[i] == 1) one.push_back(i);
    
    sort(one.begin(), one.end());
    return one[0];
}