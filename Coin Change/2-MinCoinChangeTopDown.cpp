#include<iostream>
#include<vector>
using namespace std;

int coinChangeRecursion(vector<int> &coins,int amount,vector<int> &dp){
    if(amount==0)
        {
            return 0;
        }
        if(amount<0)
        {
            return INT_MAX;
        }
        if(dp[amount]!=-1)
        {
            return dp[amount];
        }
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            int ans=coinChangeRecursion(coins,amount-coins[i],dp);
            if(ans!=INT_MAX)
            {
                mini=min(mini,ans+1);
            }
        }
        dp[amount]=mini;
        return dp[amount];
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
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    vector<int>dp(amount+1,-1);
        int ans=coinChangeRecursion(v,amount,dp);
        if(ans!=INT_MAX)
        {
            cout<<ans;
        }
        else{
            cout<<-1;
        }
}