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
	ll cnt1 = 0, cnt0 = 0;
	for(ll i =0;i<n;i++){
		ll q;
		cin>>q;
		if(q){
			cnt1++;
		}
		else{
			cnt0++;
		}
	}
	if(cnt1 <= n/2){
		cout<<cnt0<<'\n';
		while(cnt0--){
			cout<<0<<' ';
		}
		cout<<'\n';
	}
	else{
		if(cnt1%2)
			cnt1--;
		cout<<cnt1<<'\n';
		while(cnt1--){
			cout<<1<<' ';
		}
		cout<<'\n';
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
	cin>>testcases;
	while(testcases--){
		AC_aaega();
	}			
	return 0;
}
