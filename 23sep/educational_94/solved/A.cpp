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
	string s;
	cin>>s;
	set < ll > ass;
	for(ll i =n-1;i<2*n-1;i++){
		ll qw = 0;
		for(ll j = i;j>i-n;j--){
			if(s[j] == '0'){
				qw += (1<<(i-j));
			}
		}
		ass.insert(qw);
	}
	for(ll i = (1<<(n-1));;i++){
		if(ass.find(i) == ass.end()){
			for(ll j = (n-1);j>=0;j--){
				if(i & (1<<j)){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			break;
		}
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
	cin>>testcases;
	while(testcases--){
		AC_aaega();
	}			
	return 0;
}
