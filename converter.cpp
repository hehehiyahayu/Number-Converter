#include <iostream>//c++
#include <stdio.h>//c
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>//c
#include <math.h>//penggunaan pow
#include <cmath>//penggunaan pow
#include <string>//string
#include <string.h>//operasi string seperti length, strlen
// #include <ctype.h>
#include <algorithm>

#include "Stackian.cpp"
#include "operation.cpp"
#include "converter.h"
#include "Stackian.h"

using namespace std;

void convertDeBi(struct StackNode* root, int info){
  int mod;

  while(info != 0){
    mod = (info % 2);
    cout << info << " % 2 = " << mod <<endl;
    info = (info / 2);
    push(&root, mod);
  }


  cout << "\nHasil dari Decimal ke Binary : ";
  while(!isEmpty(root)){
    cout << pop(&root);
  }
}

void convertDeOc(struct StackNode* root, int info){
  int mod;

  while(info != 0){
    mod = (info % 8);
    cout << info << " % 8 = " << mod <<endl;
    info = (info / 8);
    push(&root, mod);
  }

  cout << "\nHasil dari Decimal ke Octal : ";
  while(!isEmpty(root)){
    cout << pop(&root);
  }
}

void convertDeHe(struct StackNode* root, int info){
  int mod;

  while(info != 0){
    mod = (info % 16);
    cout << info << " % 16 = " << mod <<endl;
    info = (info / 16);
    push(&root, mod);
  }

  cout << "\nHasil dari Decimal ke Hexadecimal : ";

    while(!isEmpty(root)){
      const char *hex = "0123456789ABCDEF";
      cout << hex[pop(&root)];
    }

}


void convertBiDe(struct StackNode* root, int info){

  int temp, i;
  int equal = 0;

  while(info != 0){
    temp = info % 10; //dipecah oleh %10 karena jika sudah menjadi koma maka integer tidak akan membaca decimal
    info = info / 10;

    if(temp >= 2){
      cout << "\nerror: masukan ulang Angka biner dan pastikan hanya angka 1 dan 0" << endl;
      exit(0);
    }

    push(&root, temp);
  }

  cout << "\nHasil dari Binary ke Decimal : ";

  while(!isEmpty(root)){
    i  = getCount(root) - 1;
    equal += pop(&root) * pow(2, i);
    --i;
  }

  cout << equal;
}

void convertOcDe(struct StackNode* root, int info){
  int temp , i;
  int equal = 0;

  while(info != 0){
    temp = info % 10;
    info = info / 10;

    if(temp >= 8){
      cout << "\nerror: masukan ulang Angka biner dan pastikan hanya angka 0 sampai 7" << endl;
      exit(0);
    }

    push(&root, temp);
  }

  cout << "\nHasil dari Octal ke Decimal : ";

  while(!isEmpty(root)){
    i = getCount(root) - 1;
    equal += pop(&root) * pow(8, i);//pow rumus perpangkatan
    --i;
  }

  cout << equal;
}


void convertHeDe(struct StackNode* root, string hex){

  char seperator = ' ';

  int length = hex.length();

  int dex;

  split(hex, seperator);

  for(int i = 0; i < length; i++){
    if(hex[i] == 'A' || hex[i] == 'a'){
      dex = 10;
      push(&root, dex);
    }else if(hex[i] == 'B' || hex[i] == 'b'){
      dex = 11;
      push(&root, dex);
    }else if(hex[i] == 'C' || hex[i] == 'c'){
      dex = 12;
      push(&root, dex);
    }else if(hex[i] == 'D' || hex[i] == 'd'){
      dex = 13;
      push(&root, dex);
    }else if(hex[i] == 'E' || hex[i] == 'e'){
      dex = 14;
      push(&root, dex);
    }else if(hex[i] == 'F' || hex[i] == 'f'){
      dex = 15;
      push(&root, dex);
    }else if(hex[i] == '0'){
      dex = 0;
      push(&root, dex);
    }else if(hex[i] == '1'){
      dex = 1;
      push(&root, dex);
    }else if(hex[i] == '2'){
      dex = 2;
      push(&root, dex);
    }else if(hex[i] == '3'){
      dex = 3;
      push(&root, dex);
    }else if(hex[i] == '4'){
      dex = 4;
      push(&root, dex);
    }else if(hex[i] == '5'){
      dex = 5;
      push(&root, dex);
    }else if(hex[i] == '6'){
      dex = 6;
      push(&root, dex);
    }else if(hex[i] == '7'){
      dex = 7;
      push(&root, dex);
    }else if(hex[i] == '8'){
      dex = 8;
      push(&root, dex);
    }else if(hex[i] == '9'){
      dex = 9;
      push(&root, dex);
    }else{
      cout << "\nerror: masukan ulang Angka biner dan pastikan hanya angka 0 sampai 9 dan huruf A sampai F" << endl;
      exit(0);
    }
  }

  int i = 1;
  int equal = 0;

  cout << "Hasil dari Hexadecimal ke Decimal : ";
  while(!isEmpty(root)){
    equal += pop(&root) * i;
    i = 16 * i;
  }
  cout << equal;
}
