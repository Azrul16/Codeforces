#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b=0,x=0,p,sum=0,y=0,z=0;
    cin>>p;
    int arr[p];
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
   sort(arr, arr + p, greater<int>());
   for(int i=0;i<p;i++){
        if(arr[i]==4)
            b++;
        else if(arr[i]==3)
            x++;
        else if(arr[i]==2)
            y++;
        else if(arr[i]==1)
            z++;
    }
    if(x>=z){
            z=0;
        if(y%2==0)
        y=y/2;
    else if(y%2!=0)
    {
        y=y/2 +1;

    }
    }
    else if(x<z){
        z=z-x;
        if(y%2==0)
        y=y/2;
    else if(y%2!=0)
    {
        y=y/2 +1;
        if(z<=2)
        z=0;
        else if(z>2)
            z=z-2;


    }

    }
    if(z%4==0)
        z=z/4;
    else if(z%4!=0)
        z=z/4 +1;


    sum=b+x+y+z;
    cout<<sum;

}
