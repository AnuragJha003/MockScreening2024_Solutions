#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    
    int b[n];
    int l = 0, r = n - 1;
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            b[l++] = a[i];
        else
            b[r--] = a[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << endl;
}

signed main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); 
//     int t;
//     cin >> t;
//     while(t--){
        solve();
//     }
    return 0;
}
