#include<iostream>
#include<vector>
using namespace std;



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
    int prev2=0;
    int prev1=v[0];
    for(int i=1;i<n;i++)
    {
        int include=prev2+v[i];
        int exclude=prev1;

        int ans=max(include,exclude);
        prev2=prev1;
        prev1=ans;
    }
    cout<<prev1;
}