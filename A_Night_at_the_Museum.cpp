#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(i=x; i<y; i++)
#define flc(i,x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl;
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n) {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s) {stringstream sst; sst<<n; sst>>s;}
#define ff first
#define ss second
#define goBABYgo {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------

int main()
{   goBABYgo
    ll t,a,b,c,n,i,j,tem=0,sum=0;
    string s;
    cin>>s;
    fl(i,0,s.size()-1){
        a=abs(s[i]-s[i+1]);
        if(a>13)
        sum+=(26-a);
        else
        sum+=a;
    }
    cout<<sum;
    nl
    
}