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
	ll a, b;
	cin>>a>>b;
	if(a > b)
		swap(a, b);
	if(a == b){
		cout<<0;
		return;
	}
	ll ans = INF, kans;
	for(ll i = 1;i*i<=(b-a);i++){
		if((b-a)%i == 0){
			ll qk = 0;
			if(a%i == 0){
				qk = 0;
			}
			else{
				qk = i - (a%i);
			}
			ll cl = (a+qk)*(b+qk)/i;
			if(ans > cl){
				kans = qk;
				ans = cl;
			}
			qk = 0;
			if(a%((b-a)/i) == 0){
				qk = 0;
			}
			else{
				qk = ((b-a)/i) - (a%((b-a)/i));
			}
			cl = (a+qk)*(b+qk)/((b-a)/i);
			if(ans > cl){
				kans = qk;
				ans = cl;
			}
		}
	}
	cout<<kans;
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
