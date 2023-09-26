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
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    string s,s1,sp;
    vector<ll>v;
    vll(v1) vll(v2)
    vector<string>vs;
    cin>>n;
    fl(i,0,n){
        cin>>a>>s;
        if(s=="01")v1.pb(a);
        else if(s=="10")v2.pb(a);
        else if(s=="11")v.pb(a);
    }
    vsort(v1) vsort(v2) vsort(v)
    //cout<<v1.size()<<" "<<v2.size()<<" "<<v.size();
    if(v.size())cnt=v[0];
    if(v1.size()&&v2.size())tmp=v1[0]+v2[0];
    if(cnt&&tmp)cout<<min(cnt,tmp);
    else if(cnt)cout<<cnt;
    else if(tmp)cout<<tmp;
    else cout<<"-1";

    nl
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}