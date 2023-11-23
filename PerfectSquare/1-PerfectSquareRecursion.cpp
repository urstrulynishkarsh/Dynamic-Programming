#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int PerfectSquare(int n)
{
    if(n==0)
    {
        return 0;
    }
    int ans=INT_MAX;
    for(int i=1;i*i<=n;i++)
    {
        ans=min(ans,1+PerfectSquare(n-i*i));
    }
    return ans;
} 
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<PerfectSquare(n);
}