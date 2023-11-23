#include<iostream>
#include<vector>
using namespace std;

// space optimization
int ClimbStair(int n)
{
   
    int prev2=1;
    int prev1=1;
    if(n==0)
    {
        return prev2;
    }
    if(n==1)
    {
        return prev1;
    }
    int curr;
    for(int i=2;i<=n;i++)
    {
        curr=prev2+prev1;
        prev2=prev1;
        prev1=curr;
    }
    return curr;
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
   
    cout<<ClimbStair(n);

}