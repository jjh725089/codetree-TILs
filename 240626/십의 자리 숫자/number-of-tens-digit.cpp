#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int cnt[9] = {0,};
    for(int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        break;
        if (arr[i] > 9)
        {
            cnt[arr[i] / 10 - 1]++;
        }
    }
    for(int i = 0; i < 9; i++)
    {
        cout << i + 1 << " - " << cnt[i] << endl;
    }
    return 0;
}