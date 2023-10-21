//Aurthor:- Azrul Amaline
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(i=x; i<y; i++)
#define flc(i,x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl;
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
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;

    fl(i,0,s1.size()){
        if(s1[i]=='G')
        s1[i]='B';
        if(s2[i]=='G')
        s2[i]='B';
    }
    if(s1.compare(s2))
    cout<<"NO";
    else cout<<"YES";
    nl
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}