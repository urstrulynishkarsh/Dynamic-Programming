#include<iostream>
#include<vector>
using namespace std;



void  CombinationalSum(vector<int> &v, int n, int index,int target,vector<vector<int> > &result ,vector<int> &ans)
{
    if(target==0)
    {
        result.push_back(ans);
        return;
    }
    if(target<0)
    {
        return;
    }
    for(int i=index;i<n;i++)
    {
        if(i>index && v[i]==v[i-1])
        continue;


        ans.push_back(v[i]);
        CombinationalSum(v,n,i+1,target-v[i],result,ans);
        ans.pop_back();
    }
}

int main()
{
    int n;
    cout<<"Ente the size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int target;
    cout<<"Enter the value of target: ";
    cin>>target;
    vector<vector<int> > result;
    vector<int> ans;
    int index=0;
    sort(v.begin(),v.end());
    CombinationalSum(v,n,index,target,result,ans);
    
     // Iterate through the rows
    for (int i = 0; i < result.size(); i++) {
        // Iterate through the columns of each row
        for (int j = 0; j < result[i].size(); j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl; // Print a newline after each row
    }

}