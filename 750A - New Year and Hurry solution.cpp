#include <bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,i,sum=0,res,flag=0;

     cin>>a>>b;
     res=240-b;

        for (i=1;i<=a;i++)
        {
            sum+=5*i;

            if(sum>res)
                break;

            flag=flag+1;
        }

        cout <<flag<< endl;
}
