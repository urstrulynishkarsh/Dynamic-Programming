#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairsBottomUp(vector<int>& cost,int n)
{

    vector<int> dp(n+1);
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(int i=2;i<n;i++)
    {
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
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
   
    cout<<minCostClimbingStairsBottomUp(v,n);
}