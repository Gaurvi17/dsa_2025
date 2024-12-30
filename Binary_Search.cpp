#include<bits/stdc++.h>
using namespace std;
#define int long long

int binarySearch(const vector<int>& A, int X) 
{
    int left = 0;
    int right = A.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (A[mid] == X) {
            return mid;  
        } else if (A[mid] < X) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }

    return -1; 
}
signed main() 
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < Q; i++) {
        int X;
        cin >> X;
        if (binarySearch(A, X) != -1) 
            cout << "found" << endl;
        else 
            cout << "not found" << endl;
    }
    return 0;
}