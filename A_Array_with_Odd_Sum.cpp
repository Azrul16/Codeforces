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
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,flag=0,ans=0,sum=0,even=0,odd=0;
      cin>>n;
       sum=0;
       odd=0;
       even=0;
       int arr[n];
       for(int j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]%2!=0 || arr[j]==1){
               odd++;
           }else{
               even++;
           }
           sum+=arr[j];
       }
       
       if(sum%2!=0 || sum==1){
           cout<<"YES"<<endl;
       }
       else{
           if(odd!=0 && even!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}