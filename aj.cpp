#include<bits/stdc++.h>
using namespace std;

#define int long long
using VI= vector<int>;
#define FOR(i,a,b) for (int i=a;i<b;i++)

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int>a(n);
    FOR(i,0,n)
    {
        cin >>a.at(i);
    }
    if (k >=3)
    {
        cout << 0 << endl;
        return;
    }
    auto findMinDiff=(vector<int>arr)
    {
        sort(arr.begin(),arr.end());
        int ans = arr[1] - arr[0];
        FOR(i,1,arr.size())
        {
            ans = min(ans,arr[i]-arr[i-1]);
        }
        return ans;
    };
    sort(a.begin(),a.end());
    if(k == 1)
    {
        cout << min(a[0],findMinDiff(a)) <<endl;
    }
    else
    {
        int ans1 = findMinDiff(a);
        sort(a.begin(),a.end());
        FOR(i,0,n)
        {
            FOR(j,i+1,n)
            {
                int diff=abs(a[i]-a[j]);
                int ind = lower_bound(a.begin(),a.end(),diff)-a.begin();
                if (ind < n && ind >=0)
                {
                    ans1 = min(ans1,abs(a[ind]-diff));
                }
                ind--;
                if (ind<n && ind >=0)
                {
                    ans1 = min(ans1,abs(a[ind]-diff));
                }
            }
            cout << ans1 << endl;
        }
    }
}

signed main()
{
    ios_base::synx_with_stdio(false);
    cin.tie(NULL);
    int totalTests=1;
    for(int testNo=1;testNo<=totalTest;testNo++)
    {
        solve();
    }
    return 0;
}
