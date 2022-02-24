void moveZeroes(vector<int>& nums){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
       if(nums[i]!=0){
            swap(nums[i],nums[count]);
            count++;
        }
    }

    
 #second solution with O(N) complexity
 
void moveZeroes(vector<int>& nums) 
{

int n=nums.size();
int count=0;
for(int i=0;i<n;i++){
    if(nums[i]==0){
        int j=i+1;
        while(j<n){
            if(nums[j]==0){
               j++;
            }
            else{
                nums[i+count]=nums[j];
                nums[j]=0;
                count++;
                j++;
            }
        }
    break;
    }
}
 
