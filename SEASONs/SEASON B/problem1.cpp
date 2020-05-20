#include <bits/stdc++.h>
using namespace std;

int n, a[110];

void solve() {
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	int ans=0;
	for(int i=1; i<n-1; i++)
	{
		if(a[i-1] < a[i] && a[i+1] < a[i])
		{
		    ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}
