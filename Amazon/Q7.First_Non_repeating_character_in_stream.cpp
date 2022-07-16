#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    int n = A.size();
		    unordered_map<char,int> mp;
		    queue<char> q;
		    string ans = "";
		    for(int i=0;i<n;i++){
		        mp[A[i]]++;
		        if(mp[A[i]]==1) q.push(A[i]);
		        while(!q.empty() && mp[q.front()]!=1){
		            q.pop();
		        }
		        if(q.empty()) ans+= '#';
		        else{
		            ans+= q.front();
		        }
		    }
		    return ans;
		}

};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.FirstNonRepeating(s)<<endl;       
    }
    return 0;
}