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

int convertTwoDigitStringToInt(const std::string& str) {
    if (str.length() != 2 || !isdigit(str[0]) || !isdigit(str[1])) {
        std::cerr << "Invalid input: The input string must be exactly 2 digits." << std::endl;
        return -1; // Returning -1 to indicate an error
    }

    // Convert the string to an integer
    int number = std::stoi(str);

    return number;
}


int solve(){
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    int p,q;
    string s,s1,sp;
    vector<ll>v;
    vector<string>vs;
    cin>>s;
    p=stoi(s.substr(0,2));
    cout<<p;
    
    nl

    s="";

    return 0;
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}