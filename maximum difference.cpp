#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,2,6,4,5,1,2};
    int n=7;
    int minn=arr[0];int res=arr[0]-arr[1];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minn);
        minn=min(minn,arr[j]);
        }
    cout<<res;
    
return 0;
}
