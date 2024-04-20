#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], e_sum = 0, o_sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(i % 2 == 0)
        {
            e_sum += arr[i];
        }
        else
        {
            o_sum += arr[i];
        }
    }
    if(o_sum > e_sum)
        cout << o_sum - e_sum;
    else if (e_sum >= o_sum)
        cout << e_sum - o_sum;
    return 0;
}