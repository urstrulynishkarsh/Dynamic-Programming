#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;


int CutSegment(int n,int &x,int &y,int &z)
    {
        vector<int> dp(n+1,INT_MIN);
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            if(i-x>=0)
            {
                dp[i]=max(dp[i],dp[i-x]+1);
            }
            if(i-y>=0)
            {
                 dp[i]=max(dp[i],dp[i-y]+1);
            }
            if(i-z>=0)
            {
                 dp[i]=max(dp[i],dp[i-z]+1);
            }
        }
        if(dp[n]<0)
        {
            return 0;
        }
        else{
        return dp[n];
        }
    }
    int main(){
    int n;
    cout<<"Enter the length of rod: ";
    cin>>n;
    int x,y,z;
    cout<<"Enter the cut segment: ";
    cin>>x>>y>>z;
   
    cout<<CutSegment(n,x,y,z);
   
}