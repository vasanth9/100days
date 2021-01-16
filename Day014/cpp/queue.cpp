#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
    int head=0;
    int tail=0;
    int arr[10];
    public:
    void EnQueue(int ele){
        if(isFull()){
            cout<<"Queue is Full.\n";
        }else{
        arr[tail]=ele;
        tail==9?tail=0:tail++;}
    }
    void Dequeue(){
       if(!isEmpty())
       head==9?head=0:head++;
       else cout<<"Queue Is Empty.\n";
    }
    int isEmpty()
    {
     return head==tail;
    }
    int isFull()
    {
        return tail==head-1 || (head==0 && tail==9);
    }
    int print()
    {
        if(!isEmpty())
        {
            return arr[head];
        }
        else cout<<"Queue Is Empty.\n";
        return -1;
    }


};
int main()
{
    Queue q=Queue();
    q.EnQueue(1);
    q.EnQueue(2);
    q.EnQueue(3);
    q.EnQueue(4);
    q.EnQueue(5);
    q.EnQueue(6);
    q.EnQueue(7);
    q.EnQueue(8);
    q.EnQueue(9);
    q.Dequeue();
    q.EnQueue(10);
    q.Dequeue();
    q.EnQueue(11);
    q.Dequeue();
    q.EnQueue(12);
    q.Dequeue();
    q.EnQueue(13);
    q.Dequeue();
    q.EnQueue(14);
    q.Dequeue();
    q.EnQueue(15);
    
    q.EnQueue(16);
    while(!q.isEmpty())
    {
        cout<<q.print()<<"\n";
        q.Dequeue();

    }
    q.Dequeue();
    q.Dequeue();

}