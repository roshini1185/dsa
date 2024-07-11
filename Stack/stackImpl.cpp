#include <iostream>

using namespace std;

class Stack{
    public:
    int top=-1;
    int size;
    int *arr;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
    }
    
    void push(int element){
        if(top>size-1){
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top=top+1;
            arr[top]=element;
            cout<<element<<" inserted into stack"<<endl;
        }
    }
    void pop(){
        if(top==-1)
            cout<<"Stack empty"<<endl;
        else
       { cout<<arr[top]<<" popped out of stack"<<endl;
         top--;}
         
    }
    void isEmpty(){
        if(top==-1)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
    void peek(){
        if(top==-1)
        cout<<"Stack empty"<<endl;
        else
        cout<<arr[top]<<endl;
    }
    
};
int main(){
    Stack *s=new Stack(5);
    s->push(29);
    s->push(96);
    s->push(94);
    s->push(28);
    s->push(10);
    s->push(6);
    s->pop();
    s->pop();
    s->isEmpty();
}