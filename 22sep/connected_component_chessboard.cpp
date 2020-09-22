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

ll q = 2, qq = 2, w = 2, ww = 3;

void AC_aaega(){
	ll b, w1;
	cin>>b>>w1;	
	if(b < w1){
		if(w1 > 3*b+1){
			cout<<"NO\n";
			return;
		}
		cout<<"YES\n";
		ll qw = 0;
		for(ll i =0;i<b;i++){
			cout<<w<<' '<<ww+2*i<<'\n';
		}
		for(ll i =0;i<b;i++){
			cout<<w<<' '<<ww+2*i+1<<'\n';
			qw++;
			if(qw == w1)
				return;
		}
		for(ll i =0;i<b;i++){
			cout<<w+1<<' '<<ww+2*i<<'\n';
			qw++;
			if(qw == w1)
				return;
		}
		for(ll i =0;i<b;i++){
			cout<<w-1<<' '<<ww+2*i<<'\n';
			qw++;
			if(qw == w1)
				return;
		}
		cout<<w<<' '<<ww-1<<'\n';
		qw++;
		if(qw == w1)
			return;
	}
	else{
		if(b > 3*w1+1){
			cout<<"NO\n";
			return;
		}
		cout<<"YES\n";
		ll qw = 0;
		for(ll i =0;i<w1;i++){
			cout<<q<<' '<<qq+2*i<<'\n';
		}
		for(ll i =0;i<w1;i++){
			cout<<q<<' '<<qq+2*i+1<<'\n';
			qw++;
			if(qw == b)
				return;
		}
		for(ll i =0;i<w1;i++){
			cout<<q+1<<' '<<qq+2*i<<'\n';
			qw++;
			if(qw == b)
				return;
		}
		for(ll i =0;i<w1;i++){
			cout<<q-1<<' '<<qq+2*i<<'\n';
			qw++;
			if(qw == b)
				return;
		}
		cout<<q<<' '<<qq-1<<'\n';
		qw++;
		if(qw == b)
			return;
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