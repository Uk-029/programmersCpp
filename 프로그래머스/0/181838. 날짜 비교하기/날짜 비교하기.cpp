#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    return date1 < date2;       //사전식 비교를 함. 즉 내부적으로 첫 번째부터 마지막 원소까지 동일한 원소끼리 비교함
}