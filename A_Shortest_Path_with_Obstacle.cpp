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
#define vin(v,n) { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
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
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0,p,q;
    cin>>a>>b>>x>>y>>p>>q;
    sum+=(abs(a-x)+abs(b-y));
    if((a==p||x==p)&&(max(y,b)>q)&&min(y,b)<q){
        sum+=2;
    }
    else if((b==q||y==q)&&(max(x,a)>p)&&min(x,a)<p)sum+=2;

    cout<<sum;nl
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}