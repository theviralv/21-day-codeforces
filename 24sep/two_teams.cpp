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
	ll n, k;
	cin>>n>>k;
	vector < ll > v1(n, 0);
	vector < ll > pos(n+1, 0);
	vector < ll > used(n+1, 0);
	vector < ll > v2(n+1, 0);
	set < ll > lf, rt;
	for(ll i = 1;i<=n;i++){
		lf.insert(-i);
		rt.insert(i);
	}
	for(ll i =0;i<n;i++){
		cin>>v1[i];
		pos[v1[i]] = i;
	}
	ll tt = 1;
	for(ll i = n;i>0;i--){
		if(used[i])
			continue;
		used[i] = 1;
		lf.erase(-(pos[i]+1));
		rt.erase(pos[i]+1);
		v2[pos[i]] = tt;
		ll crr = -(pos[i]+1);
		for(ll j = 0;j<k;j++){			
			auto it = lf.upper_bound(crr);
			// cerr<<*it<<'\n';
			if(it == lf.end()){
				break;
			}
			crr = *(it);
			used[v1[(-*(it))-1]] = 1;
			v2[(-*(it))-1] = tt;
			rt.erase(-*it);
			lf.erase(it);
		}
		crr = (pos[i]+1);
		for(ll j = 0;j<k;j++){			
			auto it = rt.upper_bound(crr);
			if(it == rt.end()){
				break;
			}
			crr = *it;
			used[v1[*(it)-1]] = 1;
			v2[*(it)-1] = tt;
			lf.erase(-*it);
			rt.erase(it);
		}
		tt = ((tt == 1)?2:1);
	}
	for(ll i =0;i<n;i++){
		cout<<v2[i];
	}
	cout<<'\n';
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
