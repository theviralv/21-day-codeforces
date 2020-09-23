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
	string w;
	ll x;
	cin>>w>>x;
	string s;
	for(ll i =0;i<sz(w);i++){
		s += '@';
	}
	for(ll i =0;i<sz(w);i++){
		if(w[i] == '0'){
			if(i+x < sz(w)){
				s[i+x] = '0';
			}
			if(i-x >= 0 && s[i-x] == '1'){
				cout<<-1<<'\n';
				return;
			}
			if(i-x >= 0){
				s[i-x] = '0';
			}
		}
		else{
			if(i-x >= 0 && (s[i-x] == '@' || s[i-x] == '1')){
				s[i-x] = '1';
				continue;
			}
			else if(i+x < sz(w)){
				s[i+x] = '1';
				continue;
			}
			else{
				cout<<-1<<'\n';
				return;
			}
		}
	}
	for(ll i=0;i<sz(s);i++){
		if(s[i] == '@'){
			s[i] = '1';
		}
	}
	cout<<s<<'\n';
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
