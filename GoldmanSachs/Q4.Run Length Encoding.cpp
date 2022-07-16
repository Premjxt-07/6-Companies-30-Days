#include <bits/stdc++.h>
using namespace std;

string encode(string s)
{     
  string ans="";
  int i=0,j=0;
  while(j<s.length()){
      while(s[i]==s[j]){
          j++;
      }
      ans+=s[i] + to_string(j-i);
      i=j;
  }
  return ans;
}        
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
 
