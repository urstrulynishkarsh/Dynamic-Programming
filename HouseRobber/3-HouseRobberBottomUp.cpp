#include<iostream>
#include<vector>
using namespace std;

int HouseRobber(vector<int> &nums,int n)
    {
         if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, 0);
        
        dp[0] = nums[0];       
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
           dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        
        return dp[n - 1];
        
    }

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   
    cout<<HouseRobber(v,n);
}