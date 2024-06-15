#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100], n, cnt = 0;
    cin >> n;
    int i = 1;
    while (cnt < 2)
    {
        arr[i] = n * i;
        if(arr[i] % 5 == 0)
        cnt++;
        i++;
    }
    for(int j = 1; j < i; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}