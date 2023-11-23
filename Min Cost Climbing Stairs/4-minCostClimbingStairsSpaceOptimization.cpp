#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairsBottomUp(vector<int>& cost,int n)
{

    int prev2=cost[0];
    int prev1=cost[1];
    if(n==0)
    {
        return prev2;
    }
    if(n==1)
    {
        return prev1;
    }
    
    for(int i=2;i<n;i++)
    {
        int curr=min(prev2,prev1)+cost[i];
        prev2=prev1;
        prev1=curr;
    }
    return min(prev2,prev1);
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
   
    cout<<minCostClimbingStairsBottomUp(v,n);
}