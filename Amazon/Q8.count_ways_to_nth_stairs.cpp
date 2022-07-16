#include<iostream>
using namespace std;

class Solution
{
    public:
    long long countWays(int m)
    {
        int dp[m+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=m;i++){
            dp[i] = 1 + dp[i-2];
        }
        return dp[m];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.countWays(n)<<endl;
    }
}