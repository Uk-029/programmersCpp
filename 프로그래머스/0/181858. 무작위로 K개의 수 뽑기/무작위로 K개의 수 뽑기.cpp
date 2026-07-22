#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    size_t length{arr.size()};
    
    //-1로 k만큼 answer 채우기
    for(int i{}; i < k; i++)    {
        answer.push_back(-1);
    }
    
    //arr에 있는 중복값 제거
    for(int i{}; i < length; i++)   {
        for(int j{i+1}; j < length;) {
            if(arr[i] == arr[j])    {
                arr.erase(arr.begin() + j);
                length--;
            }
            else j++;
        }
    }
    
    //answer에 arr 값 대입
    for(int i{}; i < length && i < k; i++)   {
        answer[i] = arr[i];
    }
    
    return answer;
}