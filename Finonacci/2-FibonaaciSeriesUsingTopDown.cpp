#include<iostream>
#include<vector>
using namespace std;

// Top Down
int FibonacciNumber(int n,   vector<int> &dp)
{
    if(n==0||n==1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]= FibonacciNumber(n-1,dp)+FibonacciNumber(n-2,dp);
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<FibonacciNumber(n,dp);

}