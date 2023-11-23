#include<iostream>
#include<vector>
using namespace std;


int HouseRobber(vector<int>& nums,int n,int index)
{
    if(index>=n)
    {
        return 0;
    }
    int inclusion=HouseRobber(nums,n,index+2)+nums[index];
    int exclusion=HouseRobber(nums,n,index+1)+0;
    return max(inclusion,exclusion);
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
    int index=0;
    cout<<HouseRobber(v,n,index);
}