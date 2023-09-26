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
    ll n,m,i,j,k=4,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    vll(v) vll(ans)
    cin>>n>>m;
    if(n>=0){v.pb(n);v.pb(0);}
    else {v.pb(0);v.pb(abs(n));}
    if(m>=0){v.pb(m);v.pb(0);}
    else {v.pb(0);v.pb(abs(m));}
    string s;
    cin>>s;
    ans.pb(count(all(s),'R'));
    ans.pb(count(all(s),'L'));
    ans.pb(count(all(s),'U'));
    ans.pb(count(all(s),'D'));
    fl(i,0,4){
        if(ans[i]<v[i]){
            NO nl return 0;
        }
    }
    YES
    nl return 0;
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}