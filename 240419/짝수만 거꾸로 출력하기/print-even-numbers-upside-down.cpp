#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[n - i - 1] % 2 == 0)
        {
            cout << arr[n - i - 1] << " ";
        }
    }
    return 0;
}