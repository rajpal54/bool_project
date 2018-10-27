#include <bits/stdc++.h>

using namespace std;

int main()
{
    int long long s=0,r=0,i, a[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    if(a[3]>=a[0] && a[2]>=a[0] )
    {
        s=s+a[0]*256;
        cout<<s;


    }
    if(a[0]>a[2] && a[3]>=a[2] )
    {
        s=s+a[2]*256;
        r=a[0]-a[2];
        if(r>=a[1])
        {
            s=s+a[1]*32;
            cout<<s;
        }
        else
        {
            s=s+r*32;
            cout<<s;
        }

    }
    if(a[0]>a[3] && a[2]>=a[3] )
    {
        s=s+a[3]*256;
        r=a[0]-a[3];
        if(r>=a[1])
        {
            s=s+a[1]*32;
            cout<<s;
        }
        else
        {
            s=s+r*32;
            cout<<s;
        }

    }

}
