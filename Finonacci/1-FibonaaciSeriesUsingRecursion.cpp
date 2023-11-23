#include<iostream>
#include<vector>
using namespace std;

// recursion
int FibonacciNumber(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return FibonacciNumber(n-1)+FibonacciNumber(n-2);
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<FibonacciNumber(n);

}