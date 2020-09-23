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
	vector < ll > aa(n, 0);
	map < ll, ll > pre;
	ll what = 0, last = -1;
	for(ll i =0;i<n;i++){
		cin>>aa[i];
		if(pre[aa[i]] != 0){
			what++;
			last = i;
		}
		pre[aa[i]]++;
	}	
	if(what > 1 || (last != -1 && aa[last] == 0) || pre[aa[last]-1] != 0){
		cout<<"cslnb";
		return;
	}
	if(last != -1){
		aa[last] -= 1;
		sort(aa.begin(), aa.end());
		ll tot = 0;
		for(ll i =0;i<n;i++){
			tot += (aa[i] - i);
		}
		if(tot%2){
			cout<<"cslnb";
			return;
		}
		else{
			cout<<"sjfnb";
			return;
		}
	}
	else{
		sort(aa.begin(), aa.end());
		ll tot = 0;
		for(ll i =0;i<n;i++){
			tot += (aa[i] - i);
		}
		if(tot%2 == 0){
			cout<<"cslnb";
			return;
		}
		else{
			cout<<"sjfnb";
			return;
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
