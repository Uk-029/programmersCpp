#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

pair<int, int> calculateSlope(int x1, int y1, int x2, int y2)  {
    int dx = x1 - x2;
    int dy = y1 - y2;
    
    int gcdNum = gcd(abs(dx), abs(dy));
    
    dx /= gcdNum;
    dy /= gcdNum;
    
    if (dx < 0) {
        dx *= -1;
        dy *= -1;
    }
    
    return {dx, dy};
}

int solution(vector<vector<int>> dots) {
    int answer = 0;

    if (calculateSlope(dots[0][0], dots[0][1],
                       dots[1][0], dots[1][1])
        ==
        calculateSlope(dots[2][0], dots[2][1],
                       dots[3][0], dots[3][1]))
    {
        answer = 1;
    }

    else if (calculateSlope(dots[0][0], dots[0][1],
                       dots[2][0], dots[2][1])
        ==
        calculateSlope(dots[1][0], dots[1][1],
                       dots[3][0], dots[3][1]))
    {
        answer = 1;
    }

    else if (calculateSlope(dots[0][0], dots[0][1],
                       dots[3][0], dots[3][1])
        ==
        calculateSlope(dots[1][0], dots[1][1],
                       dots[2][0], dots[2][1]))
    {
        answer = 1;
    }
    
    return answer;
}