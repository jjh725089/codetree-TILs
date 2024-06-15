#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[100], arre[100], j = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
        {
            arre[j] = arr[i];
            j++;
        }
    }
    for(int i = 0; i < j; i++)
    {
        cout << arre[i] << " ";
    }
    return 0;
}