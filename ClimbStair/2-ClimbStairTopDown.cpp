#include<iostream>
#include<vector>
using namespace std;

// Top Down
int ClimbStair(int n,   vector<int> &dp)
{
     if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]= ClimbStair(n-1,dp)+ClimbStair(n-2,dp);
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<ClimbStair(n,dp);

}