#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define llu unsigned long long
#define PB push_back
#define F first
#define S second
#define sz(a) ((ll)a.size())
const ll MOD = 998244353;
const ll INF = 1000000000000000007;
#ifdef ONLINE_JUDGE
#define ck(x...)
#endif

void AC_aaega(){
	ll n;
	cin>>n;
	vector < string > aa(n);
	vector < ll > c(11);
	for(ll i=0;i<n;i++){
		cin>>aa[i];
		reverse(aa[i].begin(), aa[i].end());
		c[sz(aa[i])]++;
	}
	vector < ll > po(30, 1);
	for(ll i = 1;i<30;i++){
		po[i] = po[i-1]*10%MOD;
	}
	ll ans = 0;
	for(ll i =0;i<sz(aa);i++){
		string s = aa[i];
		for(ll j =0;j<sz(s);j++){
			for(ll k = 1;k<=10;k++){
				(ans += po[min(j*2, j+k)]*c[k]*(s[j]-'0')) %= MOD;
				(ans += po[min(j*2+1, j+k)]*c[k]*(s[j]-'0')) %= MOD;
			}
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
	// cin>>testcases;
	while(testcases--){
		AC_aaega();
	}			
	return 0;
}
