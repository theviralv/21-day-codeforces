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
	vector < vector < ll > > ass(n, vector < ll >(n, 0));
	ll qw = 0;
	for(ll i=0;i<n/2;i++){
		for(ll j = 0;j<n/2;j++){
			ass[i][j] = 4*qw;
			qw++;
		}
	}		
	qw = 0;
	for(ll i=0;i<n/2;i++){
		for(ll j = n/2;j<n;j++){
			ass[i][j] = 4*qw+1;
			qw++;
		}
	}		
	qw = 0;
	for(ll i=n/2;i<n;i++){
		for(ll j = 0;j<n/2;j++){
			ass[i][j] = 4*qw+2;
			qw++;
		}
	}		
	qw = 0;
	for(ll i=n/2;i<n;i++){
		for(ll j = n/2;j<n;j++){
			ass[i][j] = 4*qw+3;
			qw++;
		}
	}	
	for(ll i =0;i<n;i++){
		for(ll j =0;j<n;j++){
			cout<<ass[i][j]<<' ';
		}
		cout<<'\n';
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