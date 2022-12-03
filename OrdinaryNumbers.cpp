#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    ll n,res=0,p;
    cin>>n;
  for (p = 1; p <= n; p = p * 10 + 1) {
    for (int d = 1; d <= 9;  d++) {
      if (p * d <= n) {
        res++;
      }
    }
  }
  cout << res << endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}