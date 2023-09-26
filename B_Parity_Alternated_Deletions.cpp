

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
    vll(even) vll(odd)
    fl(i,0,n){
        cin>>a;
        if(a%2)odd.pb(a);
        else even.pb(a);
    }

    vsort(even) vsort(odd)

    if(even.size()>odd.size()&&even.size()-odd.size()>=2){
        fl(i,0,(even.size()-odd.size())-1){
            sum+=even[i];
        }
        cout<<sum;
    }
    else if(odd.size()>even.size()&&odd.size()-even.size()>=2){
        fl(i,0,(odd.size()-even.size())-1){
            sum+=odd[i];
        }
        cout<<sum;
    }

    else cout<<0;

    //printvc(odd)
    
    
}