#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9+7;


int f(int n, int k, int d, int flag, vector<vector<int>> &dp)
{
    if(n<0) return 0;
    if(n==0) return flag;
    if(dp[n][flag]!=-1) return dp[n][flag];
    int cnt = 0;
    for(int i=1; i<=k; i++)
    {
        if(i>=d) cnt = (cnt+f(n-i, k, d, 1, dp))%mod;
        else cnt = (cnt+f(n-i, k, d, flag, dp))%mod;
    }
    return dp[n][flag] = cnt;
}
int main()
{
    int n,k,d;
    cin >> n >> k >> d;
    vector<vector<int>> dp(n+1, vector<int>(2, -1));
    int ans = f(n, k, d, 0, dp);
    cout << ans;
    return 0;
}