#include<iostream>
#include<vector>
using namespace std;


int HouseRobber(vector<int>& nums,int n,int index,vector<int> &dp)
{
    if(index>=n)
    {
        return 0;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int inclusion=HouseRobber(nums,n,index+2,dp)+nums[index];
    int exclusion=HouseRobber(nums,n,index+1,dp)+0;
    return dp[index]= max(inclusion,exclusion);
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
    int index=0;
    vector<int> dp(n+1,-1);
    cout<<HouseRobber(v,n,index,dp);
}