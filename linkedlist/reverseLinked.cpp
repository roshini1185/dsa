#include <iostream>

using namespace std;

class LinkedList {
public:
    int data;
    LinkedList* next;

    LinkedList(int data) {
        this->data = data;
        this->next = NULL;
    }

   
};
void print(LinkedList* head) {
    cout << "Linked List: " << endl;
    LinkedList* traverse = head;
    while (traverse != NULL) {
        cout << (traverse->data) << " ";
        traverse = traverse->next;
    }
    cout << endl;
}
 void insertAtHead(LinkedList* &head,int data) {
     
      LinkedList* node= new LinkedList(data);
        node->next = head;
        head = node;
    }

 
    //recursive approach
void reverse(LinkedList* &head, LinkedList *prev,LinkedList* curr){
    if(curr==NULL){
         print(prev);
    }
    LinkedList* after=curr->next;
    curr->next=prev;
    prev=curr;
    
    reverse(head,prev,after);
}
// iterative approach
void reverseLinkedList (LinkedList* &head){
    LinkedList * current=head;
    LinkedList *prev=NULL;
    cout<<"After reversing ";
    // LinkedList *after=NULL;
    // while(current!=NULL){
    //   after=current->next;
    //   current->next=prev;
    //   prev=current;
       
    //   current=after;
    //   if(current==NULL){
    //       head=prev;
    //   }
    // }
  //  print(head);
    reverse(head,prev,current);
   
    
}





int main() {
    LinkedList* head = NULL;
   

   insertAtHead(head,14);
    insertAtHead(head,98);
     insertAtHead(head,56);
      insertAtHead(head,21);
       insertAtHead(head,76); 
        insertAtHead(head,64);
        print(head);
   reverseLinkedList(head);

    return 0;
}
