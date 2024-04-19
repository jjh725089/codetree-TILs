#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int e_val_sum = 0;
    double t_t_avg;
    int t_t_sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if((i + 1) % 2 == 0)
        {
            e_val_sum += arr[i];
        }
        if((i + 1) % 3 == 0)
        {
            cnt++;
            t_t_sum += arr[i];
        }
    }
    t_t_avg = t_t_sum / cnt;
    cout << e_val_sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << t_t_avg;
    return 0;
}