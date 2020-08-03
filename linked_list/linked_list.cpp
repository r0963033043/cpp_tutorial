#include <iostream>

using namespace std;

struct ListNode {
  int data;
  ListNode *nextNode;
};

void printList(ListNode *);
void pushFront(ListNode *&, int);
void pushBack(ListNode *&, int);
void remove(ListNode *&, int);
void clear(ListNode *&);
void reverse(ListNode *&);


int main(){

  // Initial head
  //ListNode *head = new ListNode;
  //ListNode *head;
  ListNode *head = 0;

  cout << "initial list: ";
  printList(head);

  // If head define like this
  //ListNode *head = new ListNode;
  // Then head can initial
  //head->data = 1;
  //head->nextNode = nullptr;

  pushFront(head, 1);
  cout << "push front list: ";
  printList(head);

  pushFront(head, 2);
  cout << "push front list: ";
  printList(head);

  pushBack(head, 3);
  cout << "push back list: ";
  printList(head);

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

void pushFront(ListNode *&head, int data){
  // 將new node接在list最前面

  // 新建一個節點
  //ListNode *newNode = 0;
  ListNode *newNode = new ListNode;
  // 設新節點的
  // 1.值為data
  // 2.next node為head
  newNode->data = data;
  newNode->nextNode = head;

  // 最後把新節點設為head
  head = newNode;
}

void pushBack(ListNode *&head, int data){
  // 將new node接在list最後面

  // 新建一個節點
  ListNode *newNode = new ListNode;
  // 設新節點的
  // 1.值為data
  // 2.next node為nullptr
  newNode->data = data;
  newNode->nextNode = nullptr;

  // 如果head是空的，則直接等於new node
  if(head == 0){
    head = newNode;
    return;
  }

  // 否則尋找head的最後一個節點
  // 新增current node的指標指向head, 用current node來尋找
  ListNode *curNode = head;
  while(curNode->nextNode != 0){
    curNode = curNode->nextNode;
  }
  // 將最後一個節點的next node設為new node
  // 改變current node等同改變head
  curNode->nextNode = newNode;
}

void remove(ListNode *&head, int data){
  ListNode *curNode = head;
  if(curNode == 0){
    cout << "List is empty." << endl;
    return;
  }

  while(curNode != 0){
    if(curNode->data == data){
      curNode
    }
    curNode = curNode->nextNode;
  }
}

void clear(ListNode *&head);
void reverse(ListNode *&head);

