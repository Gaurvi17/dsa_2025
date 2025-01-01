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
        int q,l=0;
        cin>>q;
        string s,t="";
        cin>>s;
        l=s.length();
        string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
        string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        if(q==1)
        {
            for(int i=0;i<l;i++)
            {
                 int pos = Original.find(s[i]);
                 t = t+Key[pos]; 
            }
        }
        else
        {
            for(int i=0;i<l;i++)
            {
                int pos = Key.find(s[i]);
                t = t+Original[pos]; 
            }
        }
        cout<<t<<endl;
    }
    return 0; 
}