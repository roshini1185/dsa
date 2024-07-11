 
#include <bits/stdc++.h>

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

 
    

void floydDetectRemove(LinkedList* head){
    LinkedList *slow=head,*fast=head,*prev=NULL;
    slow=slow->next;
    prev=fast->next;
    fast=fast->next->next;
    while(slow!=fast)
    {
        slow=slow->next;
        prev=fast->next;
        fast=fast->next->next;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        prev=fast;
        fast=fast->next;
    }
prev->next=NULL;
}




int main() {
    LinkedList* head = NULL;
   

  insertAtHead(head,2);
    insertAtHead(head,56);
       insertAtHead(head,91);
          insertAtHead(head,37);
             insertAtHead(head,66);
        insertAtHead(head,1);
    //insert loop
     LinkedList* last=head;
        while(last->next!=NULL){
            last=last->next;
        }
        LinkedList*  traverse=head;
        while(traverse->data!=56)
        {
            traverse=traverse->next;
        }
        last->next=traverse;

   
    
  floydDetectRemove(head);
     print(head);
    
    
     
     

    return 0;
}