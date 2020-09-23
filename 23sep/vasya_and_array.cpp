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
	ll n, m;
	cin>>n>>m;
	vector < ll > mark(n, -1);
	ll tag = 1;
	vector < pair < ll, ll > > nsort, ysort;
	for(ll i =0;i<m;i++){
		ll t, l, r;
		cin>>t>>l>>r;
		l--;
		r--;
		if(t == 1){
			ysort.PB({l, r});
		}
		else{
			nsort.PB({l, r});
		}
	}
	sort(nsort.begin(), nsort.end());
	sort(ysort.begin(), ysort.end());
	for(ll i =0;i<sz(ysort);i++){
		ll l = ysort[i].F, r = ysort[i].S;
		ll _tag = tag;
		for(ll j =l;j<=r;j++){
			if(mark[j] != -1){
				_tag = mark[j];
			}
			mark[j] = _tag;
		}
		tag++;
	}
	for(ll i =0;i<sz(mark);i++){
		cerr<<mark[i]<<' ';
	}
	cerr<<'\n';
	// cerr<<12<<'\n';
	vector < ll > nmark(n, -1);
	for(ll i =0;i<sz(nsort);i++){
		bool what = false;
		for(ll j = nsort[i].F;j<nsort[i].S;j++){
			if(mark[j] == -1 || mark[j+1] == -1 || mark[j] != mark[j+1]){
				what = true;
				nmark[j+1] = 0;
				break;
			}
		}
		if(!what){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	ll ini = 2000;
	cout<<ini<<' ';
	for(ll i =1;i<n;i++){
		if(mark[i] != -1 && mark[i-1] != -1 && mark[i] == mark[i-1]){
			cout<<ini<<' ';
		}
		else if(nmark[i] != -1){
			cout<<--ini<<' ';
		}
		else{
			cout<<ini<<' ';
		}
	}
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
