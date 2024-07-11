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
int linkLength(LinkedList* head){
    LinkedList* traverse=head;
    int len=0;
    while(traverse!=NULL){
        traverse=traverse->next;
        len++;
    }
    return len;
    
}
 int middleElement(LinkedList* head,int length){
     int ind=(length/2)+1;
     LinkedList* traverse=head;
     int count=1;
     while(count!=ind)
     {
         traverse=traverse->next;
         count++;
     }
     return (traverse->data);
 }


int main() {
    LinkedList* head = NULL;

    LinkedList* node = new LinkedList(12);
    head = node;

    insertAtHead(head,17);

    insertAtHead(head,26);
    
    insertAtHead(head,65);

    insertAtHead(head,37);
    
    insertAtHead(head,96);

    insertAtHead(head,46);
    
    print(head);
    
    int length=linkLength(head);
    
    cout<<"length: "<<length<<endl;
    
    int middle=middleElement(head,length);
    
    cout<<"Middle Element: "<<middle<<endl;
    
    

    return 0;
}
