#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define llu unsigned long long
#define PB push_back
#define F first
#define S second
#define sz(a) ((ll)a.size())
const ll MOD = 1000000007;
const ll INF = 1000000000000000007;
#ifdef ONLINE_JUDGE
#define ck(x...)
#endif

void AC_aaega(){
	ll a, b, x, y, n;
	ll aa, bb, xx, yy, nn;
	cin>>a>>b>>x>>y>>n;
	aa = a;
	bb = b;
	xx = x;
	yy = y;
	nn = n;
	// if(a < b){
		if(a - x > n){
			a -= n;
			n =0;
		}
		else{
			n -= (a-x);
			a = x;
			b -= min(n, b-y);
		}
	// }	
	// else{
		if(bb - yy > nn){
			bb -= nn;
			nn =0;
		}
		else{
			nn -= (bb-yy);
			bb = yy;
			aa -= min(nn, aa-x);
		}
	// }
	cout<<min(a*b, aa*bb)<<'\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cerr.tie(0);
	#ifndef ONLINE_JUDGE
			freopen("/home/theviralv/Desktop/input.txt", "r", stdin);
			freopen("/home/theviralv/Desktop/output.txt", "w", stdout);
			freopen("/home/theviralv/Desktop/err.txt", "w", stderr);
	#endif
	ll testcases = 1;
	cin>>testcases;
	while(testcases--){
		AC_aaega();
	}			
	return 0;
}
