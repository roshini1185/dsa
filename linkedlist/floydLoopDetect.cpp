 
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

 
    

bool floydDetect(LinkedList* head){
    LinkedList *slow=head, *fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(fast!=NULL && slow!=fast){
        slow=slow->next;
        fast=(fast->next)->next;
    }
    if(slow==fast)
    return true;
    return false;
}




int main() {
    LinkedList* head = NULL;
   

  insertAtHead(head,2);
    insertAtHead(head,98);
     insertAtHead(head,56);
      insertAtHead(head,21);
      insertAtHead(head,76); 
        insertAtHead(head,1);
     LinkedList* last=head;
        while(last->next!=NULL){
            last=last->next;
        }
        LinkedList*  traverse=head;
        while(traverse->data!=2)
        {
            traverse=traverse->next;
        }
        last->next=traverse;
        bool loop=floydDetect(head);
    
    if(loop)
    cout<<"loop detected"<<endl;
    else
    cout<<"No loop detected"<<endl;
     
     

    return 0;
}
