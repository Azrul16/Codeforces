#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[100];
   int i,a,flag=0;
   gets(s);
   a=strlen(s);
   for(i=0;i<a;i++)
    if(s[i]>=97 && s[i]<=122)
    flag++;

   if(flag>1)
    cout<<s;
   else if(flag==0){
    strlwr(s);
    cout<<s;
   }
   else if(flag==1){
    if(s[0]>=97 && s[0]<=122){
        strlwr(s);
        s[0]=toupper(s[0]);
        cout<<s;
    }
    else
        cout<<s;
   }

}

 
