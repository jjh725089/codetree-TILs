#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N, S, n_sum = 0, tn_sum, s_val, min, MIN = 100;
    cin >> N >> S;
    int arr[100];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        n_sum += arr[i];
    }
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = 1; j < N; j++)
        {
            tn_sum = n_sum;
            tn_sum = tn_sum - arr[i] - arr[j];
            if(S - tn_sum >=0)
            {
                min = S - tn_sum;
            }
            else
            {
                min = tn_sum - S;
            }
            if(MIN >= min)
            {
                MIN = min;
            }
        }
    }
    cout << MIN << endl;
    return 0;
}