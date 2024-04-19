#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt = 0, val_sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 0 && arr[i] != 0)
        {
            cnt++;
            val_sum += arr[i];
        }
        if(arr[i] == 0)
        {
            break;
        }
    }
    cout << cnt << " " << val_sum;
    return 0;
}