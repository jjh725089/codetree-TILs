#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10],j;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for(int i = 1; i <= j; i++)
    {
        cout << arr[j - i] << " ";
    }
    return 0;
}