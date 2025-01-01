#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string url;
    getline(cin, url); 
    int pos = url.find('?');
    string params = url.substr(pos + 1);
    string parameters[] = {"username", "pwd", "profile", "role", "key"};
    for (int i = 0; i < 5; i++) 
    {
        int param_pos = params.find(parameters[i] + "=");
        if (param_pos != string::npos) 
        {
            int start = param_pos + parameters[i].length() + 1;
            int end = params.find('&', start);
            if (end == string::npos) 
            {
                end = params.length();
            }
            string value = params.substr(start, end - start);
            cout << parameters[i] << ": " << value << endl;
            params.erase(0, end + 1);
        }
    }
    return 0;
}
