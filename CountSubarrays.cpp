#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int _t;
    cin>>_t;
    while(_t--) 
    {
      int n,count=0;
      cin>>n;
      count+=n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      for(int i=0;i<n-1;i++)
      {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[j-1])
            count++;
            else
            break;
        }
      }
      cout<<count<<endl;
    }
    return 0;
}