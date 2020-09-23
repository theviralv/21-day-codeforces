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

vector < bool > what(3e6, true);

void AC_aaega(){
	ll n;
	cin>>n;
	vector < ll > plist;
	for(ll i =2;i<3e6;i++){
		if(what[i]){
			plist.PB(i);
			for(ll j = i*i;j<3e6;j+=i){
				what[j] = false;
			}
		}
	}
	vector < ll > bb(2*n, 0);
	for(ll i =0;i<2*n;i++){
		cin>>bb[i];
	}
	sort(bb.begin(), bb.end());
	vector < bool > used(sz(bb), false);
	vector < ll > ans;
	vector < ll > kbaar(sz(bb), 0);
	for(ll i = sz(bb)-1;i>=0;i--){
		if(used[i] || binary_search(plist.begin(), plist.end(), bb[i]))
			continue;
		ans.PB(bb[i]);
		used[i] = true;
		ll rm = 1;
		for(ll j =2;j*j<=bb[i];j++){
			if(bb[i]%j == 0){
				rm = bb[i]/j;
				break;
			}
		}
		ll it = lower_bound(bb.begin(), bb.end(), rm) - bb.begin();
		kbaar[it]++;
		it += (kbaar[it]-1);
		used[it] = true;
	}
	for(ll i =0;i<sz(bb);i++){
		if(used[i])
			continue;
		ans.PB(bb[i]);
		used[i] = true;
		ll rm = plist[bb[i]-1];
		ll it = lower_bound(bb.begin(), bb.end(), rm) - bb.begin();
		kbaar[it]++;
		it += (kbaar[it]-1);
		used[it] = true;
	}
	for(ll i =0;i<n;i++){
		cout<<ans[i]<<' ';
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