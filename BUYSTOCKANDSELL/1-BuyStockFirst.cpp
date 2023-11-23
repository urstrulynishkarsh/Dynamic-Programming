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
    
// here is the code

    int profit=0;
    int mini=v[0];
    for(int i=1;i<n;i++)
    {
        int diff=v[i]-mini;
        profit=max(profit,diff);
        mini=min(v[i],mini);
    }
    cout<<profit;


}