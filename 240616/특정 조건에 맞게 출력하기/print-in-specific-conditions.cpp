#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i = 0;
    int flag = 1;
    while(flag == 1)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            break;
        }
        else if(arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
        }
        else if(arr[i] % 2 != 0)
        {
            arr[i] = arr[i] + 3;
        }
        cout << arr[i] << " ";
        i++;
    }
    return 0;
}