#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], e_sum = 0, o_sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 1)
            if(arr[i] > e_sum)
            e_sum = arr[i];
        else
            if(arr[i] > o_sum)
            o_sum = arr[i];
    }
    if(o_sum >= e_sum)
        cout << o_sum - e_sum;
    else
        cout << e_sum - o_sum;
    return 0;
}