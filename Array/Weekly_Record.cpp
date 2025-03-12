#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n*7+1],ans = 0;

    for(int i = 1; i <= n*7;i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i <= n*7;i++)
    {
        ans += arr[i];
        if(i % 7 == 0)
        {
            cout << ans <<" "; // printing a week record
            ans = 0; // initialize zero for new week
        }
    }
    cout << "\n";

    return 0;
}