#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;


int CutSegment(int n,int &x,int &y,int &z)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return INT_MIN;
    }
    int a=CutSegment(n-x,x,y,z)+1;
    int b=CutSegment(n-y,x,y,z)+1;
    int c=CutSegment(n-z,x,y,z)+1;
    return max(a,max(b,c));
}

int main(){
    int n;
    cout<<"Enter the length of rod: ";
    cin>>n;
    int x,y,z;
    cout<<"Enter the cut segment: ";
    cin>>x>>y>>z;
    int ans=CutSegment(n,x,y,z);
    if(ans<0)
    {
        cout<<0;
    }
    else{
        cout<<ans;
    }
}