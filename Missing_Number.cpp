class Solution {
public:
    int missingNumber(vector<int>& arr) {
    int n=arr.size();
    int x = 0;
    for (int i = 0; i < n; i++) {
        x = x ^ arr[i];
    }
 
    // Compute XOR of all the elements from 1 to `n+1`
    for (int i = 0; i <= n; i++) {
        x = x ^ i;
    }
 
    return x;

    }
};
