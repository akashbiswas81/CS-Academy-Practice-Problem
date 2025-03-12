#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[4*n-1],f[4*n+1] = {};//tracking frequency of each number

    for(int i = 0; i < 4*n-1;i++)
    {
        cin >> arr[i];
        f[arr[i]]++; // counting each number frequency
    }

    int ans;
    for(int i = 1; i <=n; i++) // number is 1 to n
    {
        if(f[i] == 3)
        {
            ans = i;
            break;
        }
    }

    cout << ans << "\n";

    return 0;
}