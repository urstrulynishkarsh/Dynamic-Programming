#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int PerfectSquare(int n)
{
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for(int target=1; target<=n; target++){
    int ans=INT_MAX;
    for(int i=1; i*i<=target; i++)
    {
        ans=min(ans ,1+dp [target- i * i ]);
    }
    dp[target]=ans;
    }
    return dp[n];
    

} 
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<PerfectSquare(n);
}