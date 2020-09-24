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

vector < ll > vn, vk; 

ll ncr(ll n, ll r){
	ll ret = 1;
	if(n<r)
		return 0;
	ret = multiply(ret, vn[n]);
	ret = multiply(ret, inverse(vn[r]));
	ret = multiply(ret, inverse(vn[n-r]));
	return ret;
}

void AC_aaega(){
	ll n, k;
	cin>>n>>k;
	vn.assign(n+1, 0);
	vk.assign(k, 0);
	ll qw = 1;
	vn[0] = 1;
	for(ll i =1;i<=n;i++){
		qw = multiply(qw, i);
		vn[i] = qw;
	}
	vector < pair < ll, ll > > v1(n);
	for(ll i =0;i<n;i++){
		cin>>v1[i].F>>v1[i].S;
	}	
	sort(v1.begin(), v1.end());
	multiset < ll > rr;
	ll ans = 0;
	for(ll i =0;i<n;i++){
		ll lf = v1[i].F;
		if(*rr.begin() >= lf){
			ans = add(ans, ncr(sz(rr), k-1));
			rr.insert(v1[i].S);
		}
		else{
			while(!rr.empty() && *rr.begin() < lf){
				rr.erase(rr.begin());
			}
			ans = add(ans, ncr(sz(rr), k-1));
			rr.insert(v1[i].S);
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
