#include<iostream>
#include<vector>
using namespace std;


int HouseRobber(vector<int> &nums)
{
    int prev2=0;
    int prev1=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        int include=nums[i]+prev2;
        int exclude=prev1;
        int ans=max(include,exclude);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
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
    if(n==1)
        {
            return v[0];
        }
        vector<int> first,second;

        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                first.push_back(v[i]);
            }
            if(i!=0)
            {
                second.push_back(v[i]);
            }
        }
        int ans1=HouseRobber(first);
        int ans2=HouseRobber(second);
        cout<<max(ans1,ans2);
    
}