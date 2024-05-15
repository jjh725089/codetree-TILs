#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요. 
    // h로 맞추기 위한 비용의 수를 배열로 만들고 T번 연속으로 되는 최소 합 확인
    int n,h,t, arr[100], arr2[100];
    cin >> n >> h >> t;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] >= h)
        {
            arr2[i] = arr[i] - h;
        }
        else
        {
            arr2[i] = h - arr[i];
        }
    }
    int min = 2100000000, cnt = 0;
    while(true)
    {
        int sum = 0;
        if(cnt + t > n)
        break;
        for(int i = cnt; i < cnt + t; i++)
        {
            sum += arr2[i];
        }
        if (sum < min)
        {
            min = sum;
        }
        cnt++;
    }
    cout << min << endl;
    return 0;
}