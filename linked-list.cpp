#ifndef LINKED_LIST_CPP
#define LINKED_LIST_CPP

#include <bits/stdc++.h>
using namespace std;

//creating a node
class Node
{
public:
  int value;
  Node *next;
};

int main(){
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;

  //allocate nodes
  one = new Node();
  two = new Node();
  three = new Node();
   
  //assign values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  //connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  head = one;
  while(head != NULL){
    printf("%d", head->value);
    head = head->next;
  }
}
#endif //LINKED_LIST_CPP
