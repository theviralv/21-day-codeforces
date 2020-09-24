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
	string s;
	cin>>s;
	map < char, ll > mp;
	for(ll i =0;i<sz(s);i++){
		mp[s[i]]++;
	}	
	if(sz(mp) == 1){
		cout<<s<<'\n';
		return;
	}
	if(sz(mp) == 2 && abs(mp.begin()->F - (next(mp.begin())->F)) != 1){
		cout<<s<<'\n';
		return;
	}
	else if(sz(mp) == 2){
		cout<<"No answer\n";
		return;
	}
	if(sz(mp) <= 3){
		if(abs(mp.begin()->F - (next(mp.begin())->F)) != 1){
			for(ll i =0;i<(next(mp.begin())->S);i++){
				cout<<(next(mp.begin())->F);
			}
			for(ll i =0;i<(mp.begin()->S);i++){
				cout<<(mp.begin()->F);
			}
			for(ll i =0;i<(prev(mp.end())->S);i++){
				cout<<(prev(mp.end())->F);
			}
			cout<<'\n';
			return;
		}
		if(abs((prev(mp.end())->F) - (next(mp.begin())->F)) != 1){
			for(ll i =0;i<((next(mp.begin()))->S);i++){
				cout<<((next(mp.begin()))->F);
			}
			for(ll i =0;i<(prev(mp.end())->S);i++){
				cout<<(prev(mp.end())->F);
			}
			for(ll i =0;i<(mp.begin()->S);i++){
				cout<<(mp.begin()->F);
			}
			cout<<'\n';
			return;
		}
		cout<<"No answer\n";
		return;
	}
	string odd, eve;
	ll i = 0;
	for(auto it : mp){
		string crr;
		for(ll j =0;j<it.S;j++){
			crr += it.F;
		}
		if(i%2){
			odd += crr;
		}
		else{
			eve += crr;
		}
		i++;
	}
	cout<<odd<<eve<<'\n';
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
