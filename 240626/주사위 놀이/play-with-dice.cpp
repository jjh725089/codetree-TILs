#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], arr_c[7] = {0,};
    for(int i = 0; i < 10; i ++)
    {
        cin >> arr[i];
        arr_c[arr[i] - 1]++;
    }
    for(int i = 1; i < 7; i++)
    {
        cout << i << " - " << arr_c[i - 1] << endl;
    }
    return 0;
}