

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
    cin>>n;
    vll(sm) vll(gg)
    map<ll,ll> mp;
    fl(i,0,n){
        cin>>a;
        mp[a]++;
    }
    for(auto it:mp){
        tmp=max(tmp,it.second);
    }
    if(tmp>2){
        cout<<"NO"; return 0;
    }
    else {
        for(auto it:mp){
            if(it.second>0){
                sm.pb(it.first);
                mp[it.first]--;
            }
        }
        for(auto it:mp){
            if(it.second>0){
                gg.pb(it.first);
                mp[it.first]--;
            }
            
        }
    }
    YES nl
    vsort(sm)
    vsortg(gg)
    cout<<sm.size()<<endl;
    printvc(sm) nl
    cout<<gg.size()<<endl;
    printvc(gg);
    

    
}