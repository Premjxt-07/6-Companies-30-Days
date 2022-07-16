#include<iostream>
#include<climits>
using namespace std;

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        int dp[K+1][N];
        for (int i = 0; i <= K; i++)
        dp[i][0] = 0;
        for (int j = 0; j <= N; j++)
        dp[0][j] = 0;
        for(int t=1;t<=K;t++){
            int maxdiff = INT_MIN;
            for(int d=1;d<N;d++){
                maxdiff = max(maxdiff,dp[t-1][d-1]-A[d-1]);
                dp[t][d] = max(maxdiff+A[d],dp[t][d-1]);
            }
        }
        return dp[K][N-1];
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
    int k,n;
    cin>>k>>n;
    int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       Solution obj;
       cout<<obj.maxProfit(k,n,arr)<<endl;
    }
    return 0;
}