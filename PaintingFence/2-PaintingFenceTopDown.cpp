#include<iostream>
using namespace std;

const int mod=1000000007;

long long PaintingFence(int n, int k,vector<long long> dp)
{
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return k*k;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=(PaintingFence(n-1,k,dp)+PaintingFence(n-2,k,dp))%mod;
    int result=(ans*(k-1))%mod;
    return dp[n]=result;

}



int main()
{
    long long n,k;
    cout<<"Enter the n number Fence: ";
    cin>>n;
    cout<<"Enter the k color fence:  ";
    cin>>k;
    vector<long long> dp(n+1,-1);
    cout<<PaintingFence(n,k,dp);
}