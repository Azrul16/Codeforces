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

int solve(){
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    string s1,s2;
    cin>>s1>>s2;
    if(s1[s1.size()-1]=='L'){
        if(s2[s2.size()-1]=='L'){
            if(s1.size()-1>s2.size()-1)cout<<">";
            else if(s1.size()-1<s2.size()-1)cout<<"<";
            else cout<<"=";
        }
        else cout<<">";
    }
    else if(s1[s1.size()-1]=='M'){
        if(s2[s2.size()-1]=='L')cout<<"<";
        else if(s2[s2.size()-1]=='M'){
            if(s1.size()-1>s2.size()-1)cout<<">";
            else if(s1.size()-1<s2.size()-1)cout<<"<";
            else cout<<"=";
        }
        else cout<<">";
    }
    else if(s1[s1.size()-1]=='S'){
        if(s2[s2.size()-1]=='L'||s2[s2.size()-1]=='M')cout<<"<";
        else {
            if(s1.size()-1>s2.size()-1)cout<<"<";
            else if(s1.size()-1<s2.size()-1)cout<<">";
            else cout<<"=";
        }
    }



    nl
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}