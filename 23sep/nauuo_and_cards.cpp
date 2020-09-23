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
	deque < ll > bb(n, 0);
	set < ll > aa;
	map < ll, ll > pos;
	for(ll i =0;i<n;i++){
		ll q;
		cin>>q;
		if(q)
			aa.insert(q);
	}	
	for(ll i =0;i<n;i++){
		cin>>bb[i];
		pos[bb[i]] = i+1;
	}
	auto qw = aa;
	auto wq = bb;
	ll zx = 0;
	while(!qw.empty()){
		wq.PB(*qw.begin());
		qw.erase(qw.begin());
		if(wq.front() != 0)
			qw.insert(wq.front());
		wq.pop_front();
		zx++;
	}
	bool what = true;
	for(ll i =1;i<n;i++){
		if(wq[i] < wq[i-1] || wq[i] == 0 || wq[i-1] == 0){
			what = false;
			break;
		}
	}
	if(what){
		cout<<zx<<'\n';
		return;
	}
	ll ans = 0;
	for(ll i =1;i<=n;i++){
		if(aa.find(i) != aa.end()){
			ans = max(ans, n+1-i);
		}
		else{
			ans = max(ans, pos[i]-i+1+n);
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