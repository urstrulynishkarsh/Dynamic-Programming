#include<iostream>
#include<vector>
using namespace std;

int coinChangeRecursionBottomUp(vector<int> &coins,int amount){
    vector<int> dp(amount+1,INT_MAX);
    dp[0]=0;
    for(int target=1;target<=amount;target++)
    {
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            if(target-coins[i]>=0)
            {
                int ans=dp[target-coins[i]];
                if(ans!=INT_MAX)
                {
                    mini=min(ans+1,mini);
                }
            }
        }
        dp[target]=mini;
    }
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

        int ans=coinChangeRecursionBottomUp(v,amount);
        if(ans!=INT_MAX)
        {
            cout<<ans;
        }
        else{
            cout<<-1;
        }
}