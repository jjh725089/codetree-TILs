#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], j;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] % 3 == 0 && i != 0)
        {
            j = i - 1;
            break;
        }
    }
    cout << arr[j];
    return 0;
}