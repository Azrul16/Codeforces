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
    ll n=0,m=0,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    cin>>a>>b>>c>>x>>y;
    if(x>a) n=x-a;
    if(y>b) m=y-b;
    if(a>=x&&b>=y)
    YES
    else{
        if(n+m<=c)
        YES
        else NO
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