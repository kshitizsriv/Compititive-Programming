#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++)
         cin>>a[i];
        int r=0;
        int b=0;
        map<int,int> m;
        m[0]=2*n;
        for(int i=2*n-1;i>=n;i--)
        {
            if(a[i]==1)
             r++;
            else
             b++;
           m[r-b]=i;
           
        }
        r=0;
        b=0;
        int res=m[0];
       
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
             r++;
            else
              b++;
            if(m.find(b-r)!=m.end())
            {    //cout<<"i="<<i<<endl;
                //cout<<b<<" "<<r<<" "<<m[b-r]<<endl;
                res=min(res,m[b-r]-i-1);
            }
        }
        cout<<res<<endl;
    }
}