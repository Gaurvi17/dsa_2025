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
       int n;
       cin>>n;
       int s[n],arr[n]={0ll};
       for(int i=0;i<n;i++)
       {
        cin>>s[i];
       }
       arr[0]=s[0];
       for(int i=1;i<n;i++)
       {
        arr[i]=s[i]-s[i-1];
       }
       for(int j=0;j<n;j++)
       {
        cout<<arr[j]<<" ";
       }
    }
    return 0;
}