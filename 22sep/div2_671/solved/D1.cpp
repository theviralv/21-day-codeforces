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
	vector < ll > ass(n, 0);
	for(ll i =0;i<n;i++){
		cin>>ass[i];
	}	
	if(n <= 2){
		cout<<0<<'\n';
		for(ll i =0;i<n;i++){
			cout<<ass[i]<<' ';
		}
		return;
	}
	sort(ass.begin(), ass.end());
	vector < ll > ans(n, 0);
	for(ll i =0;i<n;i+=2){
		ans[i] = ass.back();
		ass.pop_back();
	}
	ll ret =0;
	for(ll i =1;i<n;i+=2){
		if(ass.back() < ans[i-1] && ass.back() < ans[i+1]){
			ret++;
		}
		ans[i] = ass.back();
		ass.pop_back();
	}
	cout<<ret<<'\n';
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