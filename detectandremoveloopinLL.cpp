#include<iostream>
using namespace std;

struct node {
  int data;
  node * next;  //somehow this doesnt work.
  node(int d) {
    data = d;
    next = NULL;
  }
};

void loop_detection_deletion(node * head) {

  // Floyd Loop Detection Algorithm
   if (head == NULL || head->next == NULL)
        return;
  
        Node *slow = head, *fast = head;
      
        slow = slow->next;
        fast = fast->next->next;
      
        while (fast && fast->next) {
            if (slow == fast)
                break;
            slow = slow->next;
            fast = fast->next->next;
        }
      
        if (slow == fast) 
        {
            slow = head;
                
            if(slow == fast) {
                  while(fast->next != slow) fast = fast->next;
            }
            else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
      
            fast->next = NULL; 
        }

}
bool FLD(node * head) {
  node * slow = head;
  node * fast = head;

  while (fast != NULL && fast -> next != NULL) {
    slow = slow -> next;
    fast = fast -> next -> next;
    if (slow == fast) return true;
  }
  return false;

}
int main() {
  node * head = new node(15);
  head -> next = new node(10);
  head -> next -> next = new node(12);
  head -> next -> next -> next = new node(20);
  head -> next -> next -> next -> next = head -> next;
  loop_detection_deletion(head);
  FLD(head) ? cout << "Loop Detected" : cout << "Loop not detected";
}