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

inline ll power(ll a, ll b){
	ll m = 1;
	while(b){
		if(b%2)
			m = a*m;
		a = a*a;
		b /= 2;
	}
	return m;
}

void AC_aaega(){
	ll n;
	cin>>n;
	ll qw = 0, ans =0, nn = 1;
	while(qw <= n){
		qw += power(2, nn-1)*(power(2, nn)-1);
			cerr<<qw<<'\n';
		ans++;
		nn++;
	}
	cout<<--ans<<'\n';
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