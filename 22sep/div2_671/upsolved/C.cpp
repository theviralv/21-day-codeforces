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
	ll n, x;
	cin>>n>>x;
	ll sum =0, eq =0;
	for(ll i =0;i<n;i++){
		ll q;
		cin>>q;
		sum += (q-x);
		if(q == x)
			eq++;
	}	
	if(eq == n){
		cout<<0<<'\n';
		return;
	}
	if(sum == 0 || eq){
		cout<<1<<'\n';
	}
	else{
		cout<<2<<'\n';
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