#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime(int x){
    ll i,flag=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
            flag++;
            break;
        }
    }
    if(flag>0)
    return 0;
    else return 1;
}

int main(){
    ll a,b,k;
    cin>>a>>b;
    for(k=a+1; ;k++){
        if(prime(k))
        break;
    }
    if(k==b)
    cout<<"YES";
    else cout<<"NO";
}