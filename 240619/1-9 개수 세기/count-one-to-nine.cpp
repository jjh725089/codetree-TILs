#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100], arr_cnt[9] = {0,};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_cnt[arr[i] - 1]++;
    }
    for(int i = 0; i < 9; i++)
    {
        cout << arr_cnt[i] << endl;
    }
    return 0;
}