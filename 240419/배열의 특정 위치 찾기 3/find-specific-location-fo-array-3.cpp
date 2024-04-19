#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], j;
    for(int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    int sum;
    sum = arr[j - 1] + arr[j - 2] + arr[j - 3];
    cout << sum;
    return 0;
}