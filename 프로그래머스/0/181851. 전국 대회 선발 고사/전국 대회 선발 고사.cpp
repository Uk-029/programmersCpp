#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int, int>> canAttendance;
    
    for(int i{}; i < attendance.size(); i++)   {
        if(attendance[i])  canAttendance.emplace_back(rank[i], i);
    }
    
    sort(canAttendance.begin(), canAttendance.end());
    
    int a = canAttendance[0].second;
    int b = canAttendance[1].second;
    int c = canAttendance[2].second;
    
    return 10000*a + 100*b + c;
}