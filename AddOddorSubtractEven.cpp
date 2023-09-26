
//Aurthor:Azrul Amaline

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


void solve(){
    ll a,x,y,b;
    cin>>a>>b;
    if(a==b)
        cout<<0<<endl;
    else {
        x=a%2;
        y=b%2;
        if(x==y)
            cout<<1<<endl;
        else cout<<2<<endl;
    }

}
int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}

