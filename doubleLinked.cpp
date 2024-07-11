#include <iostream>

using namespace std;

class LinkedList {
public:
    LinkedList* prev;
    int data;
    LinkedList* next;

    LinkedList(int data) {
        this->prev=NULL;
        this->data = data;
        this->next = NULL;
    }

   
};
 void insertAtHead(LinkedList* &head,int data) {
     
      LinkedList* node= new LinkedList(data);
        head->prev=node;
        node->next = head;
        head = node;
    }

    void insertAtTail(LinkedList* &tail,int data) {
        
        LinkedList* node = new LinkedList(data);
    
        if (!tail) {
            tail = node;
        } else {
            tail->next = node;
            node->prev=tail;
            tail = node;
        }
    }
    
    void insertAtMiddle(LinkedList* &head,int data,int pos,LinkedList* &tail){
         LinkedList* node=new LinkedList(data);
        if(pos==1)
        {
            insertAtHead(head,data);
            return;
        }
        int count=1;
        LinkedList* temp=head;
        while(count!=pos-1){
            temp=temp->next;
            count++;
        }
        node->prev=temp;
        temp->prev=node;
        node->next=temp->next;
        temp->next=node;
        
        if(node->next==NULL)
        tail=node;
    }
    
    void deleteNodeValue(LinkedList* &head,LinkedList* &tail,int value){
       
       LinkedList* current=head;
       while(current!=NULL){
           if(current->data==value){
              if(current->prev==NULL)
                head=head->next;
              else
               {    if(current->next!=NULL)
                  ( current->next)->prev=current->prev;
                   else{
                       tail=current->prev;
                       (current->prev)->next=NULL;
                   }
               }
            free(current);    
            break;
           }
           else{
               
               current=current->next;
           }
       }
    }
    
    void deleteNodePos(LinkedList* &head,LinkedList* &tail,int pos){
       
       LinkedList* current=head;
       int count=1;
       if(pos==1){
           head=head->next;
       }
       else{
           
           while(count<pos){
              
               current=current->next;
               count++;
       }
        if(current->next==NULL)
           {
               tail=current->prev;
           (current->prev)->next=NULL;
               
           }
           else
          ( current->prev)->next=current->next;
           free(current);
    }
    }

void print(LinkedList* head) {
    cout << "Linked List: " << endl;
    LinkedList* traverse = head;
    while (traverse != NULL) {
        cout << (traverse->data) << " ";
        traverse = traverse->next;
    }
    cout << endl;
}

int main() {
    LinkedList* head = NULL;
    LinkedList* tail = NULL;

    LinkedList* node = new LinkedList(12);
    head = node;
    tail = node;
    
     print(head);

    insertAtHead(head,17);
    
     print(head);

    insertAtTail(tail,24);
    
     print(head);
    
     int pos=2;
    insertAtMiddle(head,76,pos,tail);
    
    print(head);
    
    deleteNodeValue(head,tail,24);
    
    print(head);
    
    insertAtTail(tail,93);
    
     print(head);
     
    insertAtHead(head,37);
    
     print(head);
   
  deleteNodePos(head,tail,5);
   
  print(head);
   
    insertAtTail(tail,67);
    
     print(head);
    
    insertAtHead(head,26);
    
     print(head);

    return 0;
}
