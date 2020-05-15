// Aditya verma
#include<bits/stdc++.h>
#define rep(i,a,n) for( int i=a ; i<n ; i++)
#define per(i,a,n) for( int i=n-1 ; i>=a ;i--)
#define pb         push_back
#define mp         make_pair
#define vi         vector<int>
#define endl       '\n'
#define int        long long int
#define deb(x)     cerr<<#x<<" : "<<x<<"\n";
#define all(x)     x.begin(),x.end()
#define mod        1000000007
bool    compare    (int a, int b) {return a < b;}
int     gcd        (int a, int b) {return b ? gcd(b, a % b) : a;}

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n , m ;
		cin >> n >> m;
		if (n == 1) {
			cout << "0\n";
		}
		else if (n == 2) {
			cout << m << endl;
		}
		else {
			cout << 2 * m << endl;
		}
	}
	return 0;
}
