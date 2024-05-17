#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, max = -1, sum, cnt;
    cin >> n;
    int arr[20][20];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = 0; j < n - 2; j++)
        {
            cnt = 0;
            sum = 0;
            while (cnt < 3)
            {
            sum += arr[i+cnt][j] + arr[i+cnt][j+1] + arr[i+cnt][j+2];
            cnt++;
            if (i+cnt > n)
            break;
            }
            if(sum >= max)
            max = sum;
        }
    }
    cout << max;
    /*
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }    
    */
    return 0;
}