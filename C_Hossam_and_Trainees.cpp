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
    //ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,tmp=0,sum=0;
    int n,m;
    cin >> n >> m;
    int R[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        R[u][v] = 1;
        R[v][u] = 1;
    }
    int s=0;
    for(int i=1;i<n+1;i++){
        int subs[n],z=0,p=0;
        for(int j=i;j<n+1;j++){
            subs[z] = j;
            z++;
            for(int k=0;k<z;k++){
                for(int l=0;l<z;l++){
                    if(R[subs[k]][subs[l]]==1){
                        p = 1;
                        break;
                    }
                }
                if(p==1){
                    break;
                }
            }
            if(p==1){
                break;
            }
            else{
                s+=1;
            }
        }
    }
    cout << s <<"\n";
    
}

int main()
{   goBabygo
    ll t;
    cin>>t;
    while(t--)
    solve();
}