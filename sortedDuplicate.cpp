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

void removeDuplicate(LinkedList* head){
    LinkedList* traverse=head;
    while(traverse!=NULL && traverse->next!=NULL){
        if((traverse->data)!=(traverse->next)->data)
        traverse=traverse->next;
        else{
            LinkedList* temp=(traverse->next)->next;
            traverse->next=temp;
        }
        
    }
    
}


int main() {
    LinkedList* head = NULL;
   

   insertAtHead(head,14);
   insertAtHead(head,14);
   insertAtHead(head,12);
   insertAtHead(head,12);
   insertAtHead(head,8);
   insertAtHead(head,6);
     
        
    removeDuplicate(head);
    print(head);
   

    return 0;
}
