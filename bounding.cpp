#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int _t = 1;
    // cin>>_t;
    while(_t--) {
        int n,x,count=1;
        cin>>n>>x;
        int arr[n],brr[n+1]={0ll};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            brr[i]=brr[i-1]+arr[i-1];
            if(brr[i]<=x)
            count++;
        }
        cout<<count<<endl;
    }
}