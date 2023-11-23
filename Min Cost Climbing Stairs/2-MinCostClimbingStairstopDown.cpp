#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairsTopDown(vector<int>& cost,int n,vector<int> &dp)
{
    if(n==0)
    {
        return cost[0];
    }
    if(n==1)
    {
        return cost[1];
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=cost[n]+min(minCostClimbingStairsTopDown(cost,n-1,dp),minCostClimbingStairsTopDown(cost,n-2,dp));
    return dp[n];
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
    vector<int> dp(n+1,-1);
    int ans=min(minCostClimbingStairsTopDown(v,n-1,dp),minCostClimbingStairsTopDown(v,n-2,dp));
    cout<<ans;
}