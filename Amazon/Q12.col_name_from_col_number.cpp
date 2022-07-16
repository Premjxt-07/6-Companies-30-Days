#include<iostream>
using namespace std;

class Solution{
    public:
    string colName (long long int n)
    {
        string s = "";
        long long int a = n;
        while(a>0){
            char temp = 'A' + a%26 -1;
            s = temp + s;
            a /=26;
        }
        return s;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        Solution obj;
        cout<<obj.colName(n)<<endl;
    }
    return 0;
}