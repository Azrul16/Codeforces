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
bool isPrime(ll p){
    ll x=sqrt(p);
    if(x*x==p)return true;
    else return false;
}

bool issqw(ll x){
    ll n=sqrt(x);
    if (n <= 1)
        return false;
    if(n==2) return true;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;

}

int solve(){
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    cin>>n;
    if(isPrime(n) && issqw(n)) YES
    else NO
    nl
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}