#include<iostream>
#include<vector>
using namespace std;


int coinChangeRecursion(vector<int> &coins,int amount){
        if(amount==0)
        {
            return 0;
        }
        if(amount<0)
        {
            return INT_MAX;
        }
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            int ans=coinChangeRecursion(coins,amount-coins[i]);
            if(ans!=INT_MAX)
            {
                mini=min(mini,ans+1);
            }
        }
        return mini;
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
    int ans=coinChangeRecursion(v,amount);
        if(ans!=INT_MAX)
        {
            cout<<ans;
        }
        else{
            cout<<-1;
        }
}