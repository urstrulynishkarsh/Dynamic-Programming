
#include<iostream>
#include<vector>
using namespace std;




 void   CombinationalSum(int n,int k, vector<vector<int> > &result,vector<int> &ans,int index)
    {
        if(ans.size()==k)
        {
            if(n==0)
                result.emplace_back(ans);
            return;
        }
        for(int i=index;i<=9;i++)
        {
            ans.emplace_back(i);
            CombinationalSum(n-i,k,result,ans,i+1);
            ans.pop_back();
        }
}
int main()
{
    int n;
    cout<<"Ente the value of n ";
    cin>>n;
    
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    vector<vector<int> > result;
    vector<int> ans;
    int index=1;
   
    CombinationalSum(n,k,result,ans,index);
    
     // Iterate through the rows
    for (int i = 0; i < result.size(); i++) {
        // Iterate through the columns of each row
        for (int j = 0; j < result[i].size(); j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl; // Print a newline after each row
    }

}