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
	ll n;
	cin>>n;
	vector < ll > aa(n, 0), bb(n, 0);
	ll ma = INF, mb = INF;
	for(ll i =0;i<n;i++){
		cin>>aa[i];
		ma = min(aa[i], ma);
	}
	for(ll i =0;i<n;i++){
		cin>>bb[i];
		mb = min(mb, bb[i]);
	}
	ll ans =0;
	for(ll i =0;i<n;i++){
		ll qa = aa[i] - ma, qb = bb[i] - mb;
		ans += max(qa, qb); 
	}
	cout<<ans<<'\n';
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
