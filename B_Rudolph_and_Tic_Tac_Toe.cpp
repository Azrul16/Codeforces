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
    char s[3][3];
    string p;
    vector<ll>v;
    vector<string>vs;
    fl(i,0,3){
        fl(j,0,3){
            cin>>s[i][j];
        }
    }

    // fl(i,0,3){
    //     fl(j,0,3){
    //         cout<<s[i][j];
    //     }
    //     nl
    // }

    
    if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][2]!='.'){cnt++;p=s[0][0];}
    else if(s[1][0]==s[1][1]&&s[1][1]==s[1][2]&&s[1][2]!='.'){cnt++;p=s[1][0];}
    else if(s[2][0]==s[2][1]&&s[2][1]==s[2][2]&&s[2][2]!='.'){cnt++;p=s[2][0];}

    else if(s[0][0]==s[1][0]&&s[1][0]==s[2][0]&&s[2][0]!='.'){cnt++;p=s[0][0];}
    else if(s[0][1]==s[1][1]&&s[1][1]==s[2][1]&&s[2][1]!='.'){cnt++;p=s[0][1];}
    else if(s[0][2]==s[1][2]&&s[1][2]==s[2][2]&&s[2][2]!='.'){cnt++;p=s[0][2];}

    else if(s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[2][2]!='.'){cnt++;p=s[0][0];}
    else if(s[1][1]==s[0][2]&&s[0][2]==s[2][0]&&s[0][2]!='.'){cnt++;p=s[1][1];}
    //else if(s[2][0]==s[2][1]&&s[2][1]==s[2][2]&&s[2][2]!='.')cnt++;

    if(cnt>0)cout<<p;
    else cout<<"DRAW";

    nl
     
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}