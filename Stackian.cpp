#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Stackian.h"

using namespace std;

struct StackNode{
  int info;
  struct StackNode* next;
};


struct StackNode* newNode(int info){

  struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));

  stackNode->info = info;
  stackNode->next = NULL;

  return stackNode;
}

int isEmpty(struct StackNode* root){
  return !root;
}

void push(struct StackNode** root, int info){

  struct StackNode* stackNode = newNode(info);
  stackNode->next = *root;
  *root = stackNode;

  // cout << "pushed to stack : " << stackNode->info << endl;

}

int pop(struct StackNode** root){
  if(isEmpty(*root)) return INT_MIN;

  struct StackNode* temp = *root;
  //stack node temp diisi dengan root yang mana node terakhir yang ditambahkan
  *root = (*root)->next;
  //root diisi dengan node selanjutnya sebelum node terakhir
  int popped = temp->info;
  free(temp);
  //menghilangkan node temp yang berisi data sebelumnya
  return popped;
}

int peek(struct StackNode* root){
  if(isEmpty(root)) return INT_MIN;

  return root->info;
}
