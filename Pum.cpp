#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int _t=1;
    //cin>>_t;
    while(_t--) 
    {
        int n,p=1;
        cin>>n;
        while(n--)
        {
            for(int i=1;i<=3;i++)
            {
                cout<<p<<" ";
                p++;
            }
            cout<<"PUM"<<endl;
            p++;
        }
    }
    return 0; 
}