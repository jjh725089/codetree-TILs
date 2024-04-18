#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10],j,flag = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            j = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        for(int i = 1; i <= j; i++)
        {
            cout << arr[j - i] << " ";
        }
    }
    else
    {
        for(int i = 0; i < 10; i++)
        {
            cout << arr[10 - i - 1] << " ";
        }
    }
    return 0;
}