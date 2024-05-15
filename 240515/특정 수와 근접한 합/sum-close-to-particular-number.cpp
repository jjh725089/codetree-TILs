#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N, S, arr[100], sum = 0;
    cin >> N >> S;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int min = 10000, t_min, t_sum;
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            t_sum = sum - arr[i] - arr[j];
            if(S - t_sum >= 0)
            {
                t_min = S - t_sum;
            }
            else
            {
                t_min = t_sum - S;
            }
            if(min > t_min)
            {
                min = t_min;
            }
        }
    }
    cout << min << endl;
    return 0;
}