

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
#define vin(v,n) { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
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

//Global Declaration
const int N=1e5+10;
int dp[N];
//--------------------------------------------------------------


int main()
{   goBabygo
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    string s,s1,sp;
    vector<ll>v;
    vector<string>vs;
    cin>>n>>m;
    if(m%n==0)a=m/n;
    else a=-1;
    // cout<<a;nl
    if(a==1)cout<<"0";
    else if(n==1)cout<<"-1";
    else if(a%3==0||a%2==0){

        while(a!=1){
            if(a%3==0)a/=3;
            else a/=2;

            cnt++;
        }
        cout<<cnt;
    }
    else cout<<"-1";


    
}