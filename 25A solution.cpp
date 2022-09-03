#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,e=0,o=0,i;
   cin>>a;
   int arr[a];
   for(i=0;i<a;i++){
    cin>>arr[i];
    if(arr[i]%2==0)
        e++;
    else
        o++;
   }
   if(e<o){
    for(i=0;i<a;i++){
        if(arr[i]%2==0){
            cout<<i+1;
            break;
        }
    }
   }
   else
   {
       for(i=0;i<a;i++){
        if(arr[i]%2!=0){
            cout<<i+1;
            break;
        }
    }
   }
}
