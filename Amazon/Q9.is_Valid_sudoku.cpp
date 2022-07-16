#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        int n = mat.size();
        unordered_map<int,set<char>> row,col,block;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int blck = (i/3)*3 + j/3;
                 if(mat[i][j]!=0){
                   if(row[i].find(mat[i][j])!=row[i].end() || col[j].find(mat[i][j])!=col[j].end()){
                        return 0;         
                     }
                    if(block[blck].find(mat[i][j])!=block[blck].end()){
                       return 0;
                   }
                row[i].insert(mat[i][j]);
                col[j].insert(mat[i][j]);
                block[blck].insert(mat[i][j]);
                 }
            }
        }
        return 1;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> v(9,vector<int>(9,0));
        for(int i=0;i<81;i++){
            cin>>v[i/9][i%9];
        }
        Solution obj;
        cout<<obj.isValid(v)<<endl;
    }
    return 0;
}