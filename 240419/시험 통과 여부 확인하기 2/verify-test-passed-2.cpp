#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int grade[4], grade_sum = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> grade[i];
            grade_sum += grade[i];
        }
        double avg = grade_sum / 4;
        if(avg >= 60)
        {
            cout << "pass" << endl;
            cnt++;
        }
        else
        {
            cout << "fail" << endl;
        }

    }
    cout << cnt;
    return 0;
}