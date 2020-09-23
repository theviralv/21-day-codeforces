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
	vector < ll > aa(n, 0);
	for(ll i=0;i<n;i++){
		cin>>aa[i];
	}
	ll ans =0;
	for(ll i =0;i<n;i++){
		vector < ll > mp(n+2, 0), pp(n+2, 0);
		ll crr = 0;
		for(ll j = i+1;j<n;j++){
			mp[aa[j]]++;
		}
		for(ll j = i+1;j<n;j++){
			if(aa[j] == aa[i]){
				ans += crr - pp[aa[j]]*mp[aa[j]] + pp[aa[j]]*(mp[aa[j]]-1);
			}
			crr -= pp[aa[j]]*mp[aa[j]];
			pp[aa[j]]++;
			mp[aa[j]]--;
			crr += pp[aa[j]]*mp[aa[j]];
		}
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
