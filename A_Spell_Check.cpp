//Aurthor:- Azrul Amaline
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
#define goBabygo {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------

int solve(){
    ll n,m,i,j,k,x,y,z,a=0,b=0,c=0,cnt=0,ans=0,d=0,e=0;
    cin>>n;
    string s;
    cin>>s;
    if(n!=5)
    cout<<"NO";
    else {
        fl(i,0,n){
            switch (s[i]){
                case 'T':
                a++;
                break;
                case 'i':
                b++;
                break;
                case 'm':
                c++;
                break;
                case 'u':
                d++;
                break;
                case 'r':
                e++;
                break;
            }
        }

        if(a==1&&b==1&&c==1&&d==1&&e==1)
        cout<<"YES";
        else
        cout<<"NO";
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