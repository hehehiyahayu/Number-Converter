#include <iostream>
#include <string>
#include <ctype.h>

#include "operation.h"

using namespace std;

void validateInt(int data){
  if(!data) {
    cout << "\nIsikan data dengan tipe integer/angka" << endl;
    exit(0);
  }
}

int getCount(struct StackNode* root){
  int count = 0;
  struct StackNode* current = root;
  while(current != NULL){
    count++;
    current = current->next;
  }
  free(current);
  return count;
}

string hexo[100];

int len(string hex){
  int length = 0;
  for(int i = 0; hex[i] != '\0'; i++){
    length++;
  }
//'\0' adalah akhir setiap string yang selalu ada namun tidak pernah ditampilkan sebagai termination string sendiri
  return length;
}

void split(string hex, char seperator){
  int currIndex = 0, i = 0;
  int startIndex = 0, endIndex = 0;
  while(i <= len(hex)){
    if(hex[i] == seperator || i == len(hex)){
      endIndex = i;
      string subStr = "";
      subStr.append(hex, startIndex, endIndex - startIndex); //memasukkan dengan parameter (string, index position dari string(untuk awal pengambilan), index yang dimasukan)
      hexo[currIndex] = subStr;
      currIndex += 1;
      startIndex = endIndex + 1;
    }
    i++;
  }
}
