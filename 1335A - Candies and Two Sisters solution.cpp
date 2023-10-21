#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,p,x,i;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>p;
        if(p%2==0)
            x=(p-1)/2;
        else
            x=p/2;
        cout<<x<<endl;
    }
}
