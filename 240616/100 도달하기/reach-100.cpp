#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[60], flag = 1;
    cin >> n;
    arr[0] = 1, arr[1] = n;
    int i = 2;
    cout << arr[0] << " " << arr[1] << " ";
    while(flag == 1)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        if(arr[i] > 100)
        {
            flag = 0;
        }
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}