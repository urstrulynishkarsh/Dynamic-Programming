#include<iostream>
using namespace std;

const int mod=1000000007;

    long long paintingFence(int n, int k)
    {
        // base case
        vector<long long> dp(n+1,-1);
        dp[1]=k;
        dp[2]=k*k;
        if(n==1)
        {
            return dp[1];
        }
        if(n==2)
        {
            return dp[2];
        }
       
        for(int i=3;i<=n;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%mod;
            dp[i]=(dp[i]*(k-1))%mod;
        }
        return dp[n];
        
        
    }



int main()
{
    long long n,k;
    cout<<"Enter the n number Fence: ";
    cin>>n;
    cout<<"Enter the k color fence:  ";
    cin>>k;
    
    int prev2=k;
    int prev1=k*k;

    for(int i=3;i<=n;i++)
    {
        int curr=((prev2+prev1)*(k-1))%mod;
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1;
}