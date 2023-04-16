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
    cin>>n;n/13;
    sum+=n/5;
    sum+=n/13;
    sum+=n/17;
    sum+=n/25;
    sum+=n/29;
    sum+=n/37;
    sum+=n/41;
    sum+=n/53;
    sum+=n/61;
    sum+=n/65;
    sum+=n/73;
    sum+=2*(n/85);
    sum+=n/89;
    sum+=n/97;sum+=n/101;sum+=n/109;
    sum+=n/113;sum+=n/125;sum+=n/137;
    sum+=n/145;sum+=n/145;sum+=n/149;
    sum+=n/157;sum+=n/169;sum+=n/173;
    sum+=n/181;sum+=n/185;sum+=n/193;
    sum+=n/197;sum+=n/205;sum+=n/205;
    sum+=n/221;sum+=n/221;sum+=n/229;
    sum+=n/233;sum+=n/241;sum+=n/257;
    sum+=n/265;sum+=n/269;sum+=n/277;
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