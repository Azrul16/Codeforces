

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

string sp[2];

void tokenize(string s, string del = " ")
{
    int start, end = -1*del.size(),i=0;
    do {
        start = end + del.size();
        end = s.find(del, start);
        sp[i]= s.substr(start, end - start);
        i++;
    } while (end != -1);
}


int main()
{   goBabygo
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    string s;
    cin>>s;
    tokenize(s,".");
    if(sp[0][sp[0].size()-1]=='9')cout<<"GOTO Vasilisa.";
    else {
        if(sp[1][0]>=53){
            sp[0][sp[0].size()-1]=char(int(sp[0][sp[0].size()-1])+1);
            cout<<sp[0];
        }
        else
         cout<<sp[0];
         }

    
}