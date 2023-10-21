//Aurthor:- Azrul Amaline
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(i=x; i<y; i++)
#define flc(i,x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl;
#define YES cout<<"YES";
#define NO cout<<"NO";
#define vll(v) vector<ll> (v);
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n) {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s) {stringstream sst; sst<<n; sst>>s;}
#define ff first
#define ss second
#define goBabygo {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------

int solve(){
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    cin>>a>>b>>c;
    x=max(a,max(b,c));
    if(a==b&&b==c)
    cout<<"1 1 1";
    else{
        if(a==x)
        cout<<0<<' ';
        else cout<<x-a+1<<' ';
        if(b==x)
        cout<<0<<' ';
        else cout<<x-b+1<<' ';
        if(c==x)
        cout<<0<<' ';
        else cout<<x-c+1;
    }
    
    nl
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}