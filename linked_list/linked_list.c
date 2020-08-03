// struct 可用於C語言

#include <iostream>

using namespace std;

struct ListNode {
  int data;
  ListNode *nextNode;
};

void printList(ListNode *head);
ListNode *pushFront(ListNode *head, int data);
ListNode *pushBack(ListNode *head, int data);
ListNode *remove(ListNode *head, int data);
ListNode *clear(ListNode *head);
ListNode *reverse(ListNode *head);


int main(){

  // Initial head
  //ListNode *head = new ListNode;
  //ListNode *head;
  ListNode *head = 0;

  cout << "initial list: ";
  printList(head);

  // If head define like this
  //ListNode *head = new ListNode;
  //head->data = 1;
  //head->nextNode = nullptr;
  //cout << "1st list: ";

  //pushFront(head, 2);
  head = pushFront(head, 2);
  printList(head);
  head = pushFront(head, 3);

  cout << "finial list: ";
  printList(head);

  return 0;
}

void printList(ListNode *head){

  if(head == 0){
    cout << "List is empty." << endl;
    return;
  }

  ListNode *curNode = head;
  while(curNode != 0){
    cout << curNode->data << " ";
#if DEBUG
    cout << curNode->nextNode << " ";
#endif
    curNode = curNode->nextNode;
  }
  cout << endl;
}

ListNode *pushFront(ListNode *head, int data){
  //ListNode *newNode = 0;
  ListNode *newNode = new ListNode;
  newNode->data = data;
  newNode->nextNode = head;

  head = newNode;
  return head;
}

ListNode *pushBack(ListNode *head, int data){
  ListNode *newNode = new ListNode;
  newNode->data = data;
  newNode->nextNode = nullptr;

  head = newNode;
  return head;
}

ListNode *remove(ListNode *head, int data);
ListNode *clear(ListNode *head);
ListNode *reverse(ListNode *head);

