#include <bits/stdc++.h>
using namespace std;
int main()
{ int a,b,i,j,r,c=0;
   cin>>a;
  int arr[a];
  for(i=0;i<a;i++)
  {
      cin>>arr[i];
  }
    cin>>b;
   int brr[b];
   for(j=0;j<a;j++)
  {
      cin>>brr[j];
  }

  for(i=0;i<a;i++)
  {  for(j=0;j<b;j++)
     {
        r=abs(arr[i]-brr[j]);
         if(r<=1)
         {
             c++;
         }

     }

  }
  cout<<c;





}

