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
    for(ll i =0;i<n;i++){
        cin>>aa[i];
    }   
    sort(aa.begin(), aa.end());
    ll l = 0, r = (n-1)/2+1;
    vector < ll > ans;
    while(r - l > 1){
        ll mid = (r+l)/2;
        bool what = true;
        vector < ll > crr;
        crr.PB(aa[n-mid-1]);
        ll i, j;
        for(i = 0,j = n-mid-1;i<mid;i++, j++){
            if(aa[i] >= aa[j] || aa[i] >= aa[j+1]){
                what = false;
                break;
            }
            crr.PB(aa[i]);
            crr.PB(aa[j+1]);
        }
        for(ll k = i;k<n-mid && what;k++){
            crr.PB(aa[k]);
        }
        if(what){
            l = mid;
            ans = crr;
        }
        else{
            r = mid;
        }
    }
    cout<<l<<'\n';
    if(l == 0){
        for(ll i =0;i<n;i++){
            cout<<aa[i]<<' ';
        }
        return;
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