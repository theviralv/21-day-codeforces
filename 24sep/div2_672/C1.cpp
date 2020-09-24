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
	ll n, q;
	cin>>n>>q;
		vector < ll > aa(n, 0);
		vector < ll > dpp(n, -1);
		vector < ll > dpn(n, -1);
	for(ll i=0;i<n;i++){
		cin>>aa[i];
	}
	if(n == 1){
		cout<<aa[0]<<'\n';
		return;
	}
	dpp[1] = max(aa[0], aa[1]);
	dpn[1] = aa[0] - aa[1];
	for(ll i =2;i<n;i++){
		dpp[i] = max(dpp[i-1], max(dpn[i-1]+aa[i], aa[i]));
		dpn[i] = max(dpn[i-1], dpp[i-1]-aa[i]);
	}
	cout<<max(dpp[n-1], dpn[n-1])<<'\n';
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
