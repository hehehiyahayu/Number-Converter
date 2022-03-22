#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct StackNode* newNode(int info);
int isEmpty(struct StackNode* root);
void push(struct StackNode** root, int info);
int pop(struct StackNode** root);
int peek(struct StackNode* root);
