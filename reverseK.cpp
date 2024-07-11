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

void reverseK(LinkedList* &traverse,int k){
   cout<<"hi";
    int count=0;
    LinkedList* curr=traverse;
    LinkedList* prev=NULL;
    LinkedList* after=curr->next;
     if(traverse==NULL)
        return;
    cout<<"hi";
   while(count!=k && curr!=NULL){
       after=curr->next;
       curr->next=prev;
       prev=curr;
       curr=after;
       count++;
       //head=prev;
       cout<<"data: "<<curr->data<<" ";
   }
   if(after!=NULL)
   reverseK(after,k);
   return ;
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
    LinkedList* traverse=head;
    reverseK(traverse,3);
        print(head);
   

    return 0;
}
