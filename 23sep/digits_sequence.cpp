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
	ll k;
	cin>>k;
	if(k <= 9){
		cout<<k;
		return;
	}
	ll qw = 9, prev = 9, now = 9;
	ll ini = 1;
	for(ll i =2;;i++){
		ini *= 10;
		now += qw*10*i;
		if(now >= k){
			ll zx = (k - prev - 1)/i, xz = i - ((k - prev - 1)%i);
			ini += zx;
			ll ans;
			while(xz){
				ans = ini%10;
				ini /= 10;
				xz--;
			}
			cout<<ans;
			return;
		}
		prev = now;
		qw *= 10;
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