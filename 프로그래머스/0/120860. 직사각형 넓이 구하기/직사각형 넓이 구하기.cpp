#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int maxX = dots[0][0];
    int minX = dots[0][0];
    int maxY = dots[0][1];
    int minY = dots[0][1];
    
    for(auto dot: dots)   {
        maxX = max(maxX, dot[0]);
        minX = min(minX, dot[0]);
        maxY = max(maxY, dot[1]);
        minY = min(minY, dot[1]);
    }
    
    return (maxX - minX) * (maxY - minY);
}