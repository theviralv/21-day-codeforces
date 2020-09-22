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

inline ll add(ll a, ll b){
	return ((a%MOD) + (b%MOD))%MOD;
}

inline ll sub(ll a, ll b){
    return ((a%MOD) - (b%MOD) + MOD)%MOD;
}

inline ll multiply(ll a, ll b){
	return ((a%MOD) * (b%MOD))%MOD;
}

inline ll power(ll a, ll b){
	ll m = 1;
	while(b){
		if(b%2)
			m = multiply(a, m);
		a = multiply(a, a);
		b /= 2;
	}
	return m;
}

inline ll inverse(ll a){
	return power(a, MOD-2);
}

void AC_aaega(){
	ll n;
	cin>>n;
	vector < pair < ll, ll > > aa(n);
	for(ll i =0;i<n;i++){
		cin>>aa[i].F>>aa[i].S;	
	}
	sort(aa.begin(), aa.end());
	ll ann = 1;
	ll an12 = 0;
	bool ok = true;
	for(ll i =1;i<n;i++){
		if(aa[i-1].S > aa[i].S){
			ok = false;
			break;
		}
	}
	if(ok){
		an12 = 1;
		for(ll i =0;i<n;){
			pair < ll, ll > crr = aa[i]; 
			ll qw =1;
			while(aa[i] == crr){
				an12 = multiply(an12, qw);
				qw++;
				i++;
			}
		}
	}
	ll aww = 1;
	for(ll i = 1;i<=n;i++){
		aww = multiply(aww, i);
	}
	for(ll i =0;i<n;){
		ll crr = aa[i].F, qw =1;
		while(aa[i].F == crr){
			ann = multiply(ann, qw);
			qw++;
			i++;
		}
	}
	ll preann = ann;
	ann = 1;
	sort(aa.begin(), aa.end(), [&](pair < ll, ll > qq, pair < ll, ll > ww){
		if(qq.S < ww.S){
			return true;
		}
		else if(qq.S > ww.S){
			return false;
		}
		else{
			if(qq.F < ww.F){
				return true;
			}
			else{
				return false;
			}
		}
	});
	for(ll i =0;i<n;){
		ll crr = aa[i].S, qw =1;
		while(aa[i].S == crr){
			ann = multiply(ann, qw);
			qw++;
			i++;
		}
	}
	cout<<sub(add(aww, an12), add(ann, preann))<<'\n';
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