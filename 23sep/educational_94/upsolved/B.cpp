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
	ll ff, ss, cnt1, cnt2, cst1, cst2;
	cin>>ff>>ss>>cnt1>>cnt2>>cst1>>cst2;
	if(cst1 > cst2){
		swap(cst1, cst2);
		swap(cnt1, cnt2);
	}	
	ll ans = 0;
	for(ll i =0;i<=cnt1;i++){
		if(i*cst1 > ff)
			break;
		ll _ff = ff, _ss = ss, _cnt1 = cnt1, _cnt2 = cnt2;
		_ff -= i*cst1;
		_cnt1 -= i;
		ll here = 0;
		here += i;
		ll qw = _ff/cst2;
		qw = min(qw, _cnt2);
		_ff -= min(qw, _cnt2)*cst2;
		_cnt2 -= min(qw, _cnt2);
		here += qw;
		qw = _ss/cst1;
		qw = min(qw, _cnt1);
		_ss -= min(qw, _cnt1)*cst1;
		_cnt1 -= min(qw, _cnt1);
		here += qw;
		qw = _ss/cst2;
		qw = min(qw, _cnt2);
		_ss -= min(qw, _cnt2)*cst2;
		_cnt2 -= min(qw, _cnt2);
		here += qw;
		ans = max(ans, here);
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
