 
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

 
    

bool detect(LinkedList* head){
    map<LinkedList*,bool> visit;
    bool detect=false;
    LinkedList* traverse=head;
    while(!detect && traverse!=NULL)
    {
        if(!visit[traverse])
        visit[traverse]=true;
        else
        detect=true;
        
        traverse=traverse->next;
    }
    return detect;
}




int main() {
    LinkedList* head = NULL;
   

  insertAtHead(head,14);
    insertAtHead(head,98);
     insertAtHead(head,56);
      insertAtHead(head,21);
      insertAtHead(head,76); 
        insertAtHead(head,64);
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
        bool loop=detect(head);
    //print(head);
    if(loop)
    cout<<"loop detected"<<endl;
    else
    cout<<"No loop detected"<<endl;
     
     

    return 0;
}
