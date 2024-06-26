

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
    bool conf= false;
    cin>>s;
    for(i=0;i<s.size();){
        if(s.substr(i,3)=="144"){
            i+=3;
            conf=true;
        }
        else if(s.substr(i,2)=="14"){
            i+=2;
            conf=true;
        }
        else if(s.substr(i,1)=="1"){
            i+=1;
            conf=true;
        }
        else{
            conf=false;
            break;
        }
    }
    if(conf)YES
    else NO
    nl


    
}