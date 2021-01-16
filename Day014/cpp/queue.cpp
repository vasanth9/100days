#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
    int head=0;
    int tail=0;
    int arr[100];
    public:
    void EnQueue(int ele){
        arr[tail]=ele;
        tail==99?tail=0:tail++;
    }
    void Dequeue(){
       head==99?head=0:head++;
    }
    int isEmpty()
    {
     return head==tail;
    }
    int print()
    {
        if(!isEmpty())
        {
            return arr[head];
        }
        else cout<<"Queue Is Empty\n";
        return -1;
    }


};
int main()
{
    Queue q=Queue();
    q.EnQueue(100);
    q.EnQueue(400);
    q.EnQueue(100);
    q.EnQueue(400);
    q.EnQueue(100);
    q.EnQueue(400);
    q.EnQueue(100);
    q.EnQueue(400);
    while(!q.isEmpty())
    {
        cout<<q.print()<<"\n";
        q.Dequeue();

    }

}