#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
void printlist(struct node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }   
    cout<<endl;
}
node* insert(int x){
    struct node* start = NULL;
    int n,val;
    n=x;
    struct node* temp;
    for(int i=0;i<n;i++){
        cin>>val;
        if(i==0){
            start = new node(val);
            temp = start;
            continue;
        }
        else{
            temp->next = new node(val);
            temp=temp->next;
        }
    }
    return start;
}

class Solution
{
    public:
    void linkdelete(struct node  *head, int M, int N)
    {
        if(head==NULL) return;
        node* prev=head;
      while(prev){
        int i=1;
        while(i<M && prev!=NULL){
            prev = prev->next;
            i++;
        }
        if(!prev) return;
        node* cur = prev->next;
        i=1;
        while(i<=N && cur!=NULL){
           cur=cur->next; 
           i++;
        }
        prev->next=cur;
        prev= cur;
      }    
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int n,m;
        cin>>m>>n;
        struct node* head = insert(x);
        Solution obj;
        obj.linkdelete(head,m,n);
        printlist(head);
    }
    return 0;
}
