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
    ll n,m,i=0,j,k,x,y,z,a,b,c,cnt1=0,cnt2=0,cnt3=0,cnt4=0,tmp=0,sum=0;
    cin>>n;
    string s,s1;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    while(s[i]=='m'){cnt1++;i++;}
    while(s[i]=='e'){cnt2++;i++;}
    while(s[i]=='o'){cnt3++;i++;}
    while(s[i]=='w'){cnt4++;i++;}

    //cout<<cnt<<" ";
    // if(cnt==n&&cnt>=4)YES
    // else NO
    // nl

    if((cnt1+cnt2+cnt3+cnt4)==n&&cnt1>0&&cnt2>0&&cnt3>0&&cnt4>0)YES
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