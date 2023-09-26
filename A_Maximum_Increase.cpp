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
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=1,ans=1;
    cin>>n;
    int arr[n];
    fl(i,0,n){
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                cnt++;
            else
            {
                if(cnt>ans)
                    ans=cnt;

                cnt=1;
            }
        }

        if(cnt>ans)
            ans=cnt;

        cout<<ans;

        nl

}

int main()
{   goBabygo
    ll t=1;
    //cin>>t;
    while(t--)
    solve();
}