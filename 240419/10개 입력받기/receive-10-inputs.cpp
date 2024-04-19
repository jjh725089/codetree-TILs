#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], j, val_sum = 0;
    double avg;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            break;
        }
        j = i + 1;
        val_sum += arr[i];
    }
    avg = double(val_sum) / j;
    cout << val_sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg;

    return 0;
}