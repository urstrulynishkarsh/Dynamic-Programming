#include<iostream>
using namespace std;

const int mod=1000000007;

long long PaintingFence(int n, int k)
{
    if(n==1)
    {
        return k;
    }
    if(n==2)
    {
        return k*k;
    }
    int ans=(PaintingFence(n-1,k)+PaintingFence(n-2,k))%mod;
    int result=(ans*(k-1))%mod;
    return result;

}



int main()
{
    long long n,k;
    cout<<"Enter the n number Fence: ";
    cin>>n;
    cout<<"Enter the k color fence:  ";
    cin>>k;
    cout<<PaintingFence(n,k);
}