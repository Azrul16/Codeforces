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
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    fl(i,0,n){
        cin>>v[i];
        mp[v[i]]++;
    }
    vsort(v)
    if(mp.size()==1)
    cout<<n*(n-1);
    else {
        z=mp[v[0]]*mp[v[n-1]];
        cout<<z*2;
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