#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int inc_st,inc_end,dec_st,dec_end;
        int i=1;
        while(i<n){
            inc_st = i-1;
            while(i<n && arr[i-1]<arr[i]){
                i++;
            }
            inc_end = i-1;
            while(i < n && arr[i] == arr[i-1]) i++;
            dec_st = i-1;
            while(i<n && arr[i-1]>arr[i]){
                i++;
            }
            dec_end = i-1;
            if(inc_end != inc_st && dec_end!= dec_st && inc_end == dec_st){ 
                ans = max(ans,dec_end - inc_st +1);
            }    
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        Solution obj;
        int ans = obj.longestMountain(v);
        cout<<ans<<endl;
    }
    return 0;
}