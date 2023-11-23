#include<iostream>
#include<vector>
using namespace std;

// recursion
int ClimbStair(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    return ClimbStair(n-1)+ClimbStair(n-2);
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<ClimbStair(n);

}