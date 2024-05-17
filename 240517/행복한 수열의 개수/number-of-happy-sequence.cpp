#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[100][100], total = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        int cnt = 1;
        for(int j = 0; j < n - 1; j++)
        {
            if(arr[i][j] == arr[i][j+1])
            {
                cnt++;
            }
            if (cnt == m)
            {
            total++;
            break;
            }
        }
    }
    //cout << total<< "r" << endl;
    for(int j = 0; j < n; j++)
    {
        int cnt = 1;
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i][j] == arr[i+1][j])
            cnt++;
            if (cnt == m)
            {
            total++;
            break;
            }
        }
    }
    if (n == 1)
    total = 2
    //cout << total << "c" << endl;
    cout << total << endl;
    return 0;
}