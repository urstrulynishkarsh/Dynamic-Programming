#include<iostream>
#include<vector>
using namespace std;

int MaximumSumOfNonAdjacent(vector<int> &arr,int n)
    {
        vector<int> dp(n+1,-1);
        dp[0]=arr[0];
        if(n==0)
        {
            return dp[0];
        }
        for(int i=1;i<n;i++){
     int temp=0;
          if(i-2>=0)
          {
              temp=dp[i-2];
          }
          int inclusion=temp+arr[i];
            int exclusion=dp[i-1]+0;
            dp[i]= max(inclusion,exclusion);
        }
        
        return dp[n-1];
        
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
   
    cout<<MaximumSumOfNonAdjacent(v,n);
}