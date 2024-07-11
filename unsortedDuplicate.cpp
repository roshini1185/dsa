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
    LinkedList* curr=head;
    
    while(curr!=NULL && curr->next!=NULL){
        LinkedList* after=curr->next;
        LinkedList* prev=curr;
        while(after!=NULL){
            if(curr->data==after->data)
            {
                LinkedList* temp=after;
                prev->next=after->next;
                after=after->next;
                free(temp);
            }
            else{
                prev=after;
                after=after->next;
            }
        }
        curr=curr->next;
    }
    
}


int main() {
    LinkedList* head = NULL;
   

   insertAtHead(head,12);
   insertAtHead(head,1);
   insertAtHead(head,8);
   insertAtHead(head,61);
   insertAtHead(head,12);
   insertAtHead(head,1);
   insertAtHead(head,8);
   insertAtHead(head,61);
   
     
        print(head);
    removeDuplicate(head);
    print(head);
   

    return 0;
}
