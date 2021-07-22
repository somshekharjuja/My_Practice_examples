#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max_sum =0,sum =0;
    for(int i=0;i<n;i++)
    {  
            sum+=arr[i];
            if(sum > max_sum)
            {
            	
                max_sum = sum;
            }
            if(sum<0)
            	sum = 0;

    }
    return max_sum;
}
int main()
{
	int arr[] = {-44,58};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"MaxSubArray sum = "<<maxSubarraySum(arr, n)<<endl;
}
