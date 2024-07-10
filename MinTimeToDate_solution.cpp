#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// Function to check if it is possible
// to complete atleast totaltask using
// current mid total time
bool timePossible(int mid, int totalTask,vector<int>& timeArr,vector<int>& restTime)
{
	// Variable to store total task
	int curTask = 0;

	// Loop to check if it is possible
	// to complete totalTask in mid time
	for (int i = 0; i < timeArr.size(); i++) {
		int totalTime
			= timeArr[i] + restTime[i];
		curTask += mid / totalTime;

		// Possible condition
		if (curTask >= totalTask) {
			return true;
		}
	}

	// If possible print true
	if (curTask >= totalTask) {
		return true;
	}

	// Else return false
	return false;
}

// Function to find minimum time taken
int minimumTimeTaken(vector<int>& timeArr,vector<int>& restTime,int totalTask)
{
	// The ranges of time
	int st = 1;
	int end = INT_MAX;

	// Variable to store minimum time
	int minimumtime = 0;

	while (st <= end) {
		int mid = st + (end - st) / 2;

		// If this mid value is possible
		// try to minimise it
		if (timePossible(mid, totalTask,
						timeArr, restTime))
			end = mid - 1;
		else
			st = mid + 1;
	}

	// Print the minimum time as answer
	return st;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(m),b(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    int ans=minimumTimeTaken(a,b,n);
    cout<<ans<<endl;
}

signed main(){
    FastIO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}