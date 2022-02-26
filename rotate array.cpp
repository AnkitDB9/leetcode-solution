class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    int temp;
    k=k%n;
    for(int i=0;i<(n-k)/2;i++){
        
        temp=nums[i];
        nums[i]=nums[(n-k)-(i+1)];
        nums[(n-k)-(i+1)]=temp;
    }
    for(int l=0;l<k/2;l++){
        
        temp=nums[(n-k)+l];
        nums[(n-k)+l]=nums[n-(l+1)];
        nums[n-(l+1)]=temp;
    }
    for(int i=0;i<n/2;i++){
        temp=nums[i];
        nums[i]=nums[n-(i+1)];
        nums[n-(i+1)]=temp;
        
    }
        
    }
};
