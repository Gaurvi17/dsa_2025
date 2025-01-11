#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        int n=arr.size();
        vector<int>v(n,arr[0]);
        for(int i=1;i<n;i++)
        {
            v[i]=v[i-1]+arr[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==0) return true;
        for(int i=1;i<n;i++)
        {
            if(v[i]==v[i-1] || v[i]==0)
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        if (obj.subArrayExists(arr))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~" << endl;
    }
    return 0;
}