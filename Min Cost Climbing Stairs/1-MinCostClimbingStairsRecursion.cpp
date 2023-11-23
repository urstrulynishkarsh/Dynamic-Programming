#include<iostream>
#include<vector>
using namespace std;


int minCostClimbingStairsRecursion(vector<int>& cost,int n)
{
    if(n==0)
    {
        return cost[0];
    }
    if(n==1)
    {
        return cost[1];
    }
    int ans=cost[n]+min(minCostClimbingStairsRecursion(cost,n-1),minCostClimbingStairsRecursion(cost,n-2));
    return ans;
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
    int ans=min(minCostClimbingStairsRecursion(v,n-1),minCostClimbingStairsRecursion(v,n-2));
    cout<<ans;
}