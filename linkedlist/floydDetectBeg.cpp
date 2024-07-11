 
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

 
    

void floydDetectBeg(LinkedList* head){
    LinkedList *slow=head,*fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<"beginning of loop: "<<slow->data<<endl;
    
}




int main() {
    LinkedList* head = NULL;
   

  insertAtHead(head,2);
    insertAtHead(head,56);
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
   // print(head);
    // beginning element of loop
    
  floydDetectBeg(head);
    
    
     
     

    return 0;
}
