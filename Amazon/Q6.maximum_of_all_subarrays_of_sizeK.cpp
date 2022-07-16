#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
      deque<int> dq;
      vector<int>ans;
      for(int i=0;i<n;i++){
          while(!dq.empty() && dq.front()==i-k){
              dq.pop_front();
          }
          while(!dq.empty() and arr[dq.back()] < arr[i]) dq.pop_back();
            
            dq.push_back(i);
            
            if(i >= k-1) ans.push_back(arr[dq.front()]);
      }
      return ans;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        Solution obj;
        vector<int> ans = obj.max_of_subarrays(v,n,k);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}