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

//Global Declaration 
//--------------------------------------------------------------
const int N=1e5+10;
int dp[N];
//--------------------------------------------------------------


int solve(){
    int x1=INT_MAX,x2=INT_MIN,y1=INT_MAX,y2=INT_MIN,x,y;
    ll n,i,sum,tmp;
    cin>>n;
    fl(i,0,n){
        cin>>x>>y;
        x1=min(x1,x);
        x2=max(x2,x);
        y1=min(y1,y);
        y2=max(y2,y);
    }
    tmp=max(x2-x1,y2-y1);
    sum=tmp*tmp;
    cout<<sum;
    nl
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}