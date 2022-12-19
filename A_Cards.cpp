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
    ll n,m,i,j,k,x=0,y=0,z=0,a=0,b=0,c,cnt=0,tmp=0,sum=0,p,q;
    cin>>n;
    string s;
    cin>>s;
    fl(i,0,n){
        if(s[i]=='o')
        x++;
        if(s[i]=='n')
        y++;
        if(s[i]=='e')
        z++;
        if(s[i]=='z')
        a++;
        if(s[i]=='r')
        b++;
    }
    p=min(x,min(y,z));
        while(p--){
            cout<<1<<' ';
            x--;y--;z--;
        }
    q=min(a,min(z,min(b,x)));
    while(q--){
        cout<<0<<' ';
    }
    
}

int main()
{   goBabygo
    ll t=1;
    //cin>>t;
    while(t--)
    solve();
}