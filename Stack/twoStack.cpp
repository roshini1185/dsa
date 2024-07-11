#include <iostream>

using namespace std;

class Stack{
    public:
    int top1=-1;
    int top2;
    int size;
    int *arr;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top2=size;
    }
    
   void push1(int ele){
       if(top1+1<top2){
           top1++;
           arr[top1]=ele;
           cout<<ele<<" is inserted into stack 1"<<endl;
       }
       else
       {
           cout<<"Stack 1 Overflow"<<endl;
       }
       
   }
   
   void push2(int ele){
       if(top2-1>top1){
           top2--;
           arr[top2]=ele;
           cout<<ele<<" is inserted into stack 2"<<endl;
       }
       else
       {
           cout<<"Stack 2 Overflow"<<endl;
       }
   }
   
   void pop1(){
       if(top1!=-1)
       {
           cout<<arr[top1]<<" is popped out of stack 1"<<endl;
           top1--;
       }
       else{
           cout<<"Stack 1 empty"<<endl;
           
           
       }
   }
   
   void pop2(){
       if(top2!=size){
           cout<<arr[top2]<<" is popped out of stack 2"<<endl;
           top2++;
       }
       else
       {
           cout<<"Stack 2 empty"<<endl;
       }
   }
   
   void isEmpty1(){
       if(top1==-1 )
       cout<<"True"<<endl;
       else
       cout<<"False"<<endl;
   }
   
   void isEmpty2(){
       if( top2==size)
       cout<<"True"<<endl;
       else
       cout<<"False"<<endl;
   }
};
int main(){
    Stack *s=new Stack(5);
    s->push1(29);
    s->push2(96);
    s->push1(94);
    s->push2(28);
    s->push1(10);
    s->push2(6);
    s->pop2();
    s->pop1();
    s->pop1();
    s->pop1();
     s->pop1();
      s->pop1();
       s->pop1();
    s->isEmpty1();
    s->isEmpty2();
}