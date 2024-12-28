#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int _t = 1;
    // cin>>_t;
    while(_t--) 
    {
        int n,min1=100;
        cin>>n;
        int arr[n],sum[n]={0},diff1[n]={0ll},diff2[n]={0ll};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
           sum[i]=arr[i]+sum[i-1];
        }
        for(int i=0;i<n;i++)
        {
            diff1[i]=sum[n-1]-sum[i];
        }
        for(int i=0;i<n;i++)
        {
             diff2[i]=abs(diff1[i]-sum[i]);
        }
        for(int i=0;i<n;i++)
        {
            min1=min(diff2[i],min1);
        }
        cout<<min1;
    }
    return 0;
}