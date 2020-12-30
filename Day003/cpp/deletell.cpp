#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
//delete in the front,middle,end
void Delete(Node ** n,int key)
{
   Node * temp=*n;
   Node * prev=NULL;
   if(temp!=NULL && temp->data==key)
   {
       *n=temp->next;
       delete temp;    
   }
   else
   {prev=temp;
   temp=temp->next;
         while(temp!=NULL)
         {
             if(temp->data==key)
             {
                 prev->next=temp->next;
             }
             temp=temp->next;
             prev=prev->next;
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
   
    printNodes(head);
    Delete(&head,3);
    printNodes(head);
    Delete(&head,1);
    printNodes(head);


}