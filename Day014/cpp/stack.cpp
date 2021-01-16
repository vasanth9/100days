#include<bits/stdc++.h>
using namespace std;

class Stack{
   public:
    int top=-1;
    int arr[100];
    
    int isEmpty(){
        return top==-1;
    }
    void push(int ele)
    {
        if(top==100)
        {   
            cout<<"Stack Overflow\n";
           
        }
        else
        {
            arr[++top]=ele;
        }
        
    }
    void pop()
    {
        if(top==-1){
            cout<<"Stack Is Empty\n";
        }
        else top--;
    }
    int topEl()
    {
        if(top>=0)return arr[top];
        else cout<<"Stack Is Empty\n";
        return -1;
    }


};
int main()
{
    Stack s= Stack();
    s.push(100);
    s.push(200);
    s.push(100);
    s.push(200);
    s.push(100);
    s.push(200);
    
    while(!s.isEmpty()){
    cout<<s.topEl()<<"\n";
    s.pop();
    }
}