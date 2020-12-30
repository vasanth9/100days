#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
//insert in the front,middle,end
void insert(Node ** n,int d,int pos)
{   Node * head=*n;
    Node * New = new Node;
    New->data=d;
    New->next=NULL;
    if(pos==0)
    {
        New->next=head;
        *n=New;
    }
    else if(pos==-1)
    {
           while(head->next!=NULL)head=head->next;
           head->next=New;
    }
    else{
        int i=1;

        while(head!=NULL)
        {
            if(pos==i)
            {   
                New->next=head->next;
                head->next=New;

            }   
            i++;
            head=head->next;
        }
       
    }

}







void printNodes(Node * n){
    while(n!=NULL)
    {
        cout<<(n->data)<<" ";
        n=n->next;
    }
    cout<<"\n";
}
int main()
{
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    insert(&head,100,0);
    insert(&head,45,4);
    insert(&head,5,-1);
    printNodes(head);

}