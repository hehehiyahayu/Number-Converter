#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "converter.cpp"
#include "operation.h"
#include "menu.h"

using namespace std;

struct StackNode* root = NULL;
//mendeklarasikan Stack dinamis dengan menginput NULL sebagai input pertama dan dijadikan sebagai variable global

void menu(){
  cout << "\r\t Number Converter" << endl;
  cout << "1. Decimal      =>     Biner" << endl;
  cout << "2. Decimal      =>     Octal" << endl;
  cout << "3. Decimal      =>     Hexadecimal" << endl;
  cout << "4. Biner        =>     Decimal" << endl;
  cout << "5. Octal        =>     Decimal" << endl;
  cout << "6. Hexadecimal  =>     Decimal" << endl;
  cout << "7. Exit" << endl;
  cout << "\nPilih menu : " << endl;
}
/*
Deskripsi procedure menu :
Menghasilkan tampilan menu sebagai pilihan yang tersedia untuk user
*/

void menu_DeBi(){
  int data;
  // string data;

  cout << "Masukkan Angka (decimal) yang ingin diubah ke Biner : ";
  cin >> data;
  // cin.getline(data, sizeof(data));
  // cin.unsetf(ios::skipws);
  // cin.getline(data, 100, '\0');
  cout << data;
  // validateSpace(data);
  validateInt(data);
  convertDeBi(root, data);
  exit(0);
}
/*
A. Deskripsi procedure menu_DeBi :
    1. menjalankan proses penginputan variable data
    2. menjalankan proses validasi dari input variable data oleh validateInt()
      dengan menggunakan parameter data dengan sistem passing by value
    3. menjalankan proses convertDeBi()
      dengan menggunakan parameter root dan data dengan sistem passing by value
    4. menjalankan proses exit

B. Kamus Data :
  1. data : variable tunggal bertipe integer

C. IS :
  1. variable data hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable data telah diisi oleh user
  2. menampilkan hasil dari validateInt(data),
    jika tervalidasi dengan benar maka melanjutkan proses selanjutnya
    jika gagal tervalidasi maka program akan keluar tanpa melanjutkan proses
  3. menampilkan hasil dari convertDeBi(root, data)
  4. menjalankan proses exit
*/

void menu_DeOc(){
  int data;

  cout << "Masukkan Angka (decimal) yang ingin diubah ke Octal : ";
  cin >> data;
  validateInt(data);
  convertDeOc(root, data);
  exit(0);
}
/*
A. Deskripsi procedure menu_DeOc :
    1. menjalankan proses penginputan variable data
    2. menjalankan proses validasi dari input variable data oleh validateInt()
      dengan menggunakan parameter data dengan sistem passing by value
    3. menjalankan proses convertDeOc()
      dengan menggunakan parameter root dan data dengan sistem passing by value
    4. menjalankan proses exit

B. Kamus Data :
  1. data : variable tunggal bertipe integer

C. IS :
  1. variable data hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable data telah diisi oleh user
  2. menampilkan hasil dari validateInt(data),
    jika tervalidasi dengan benar maka melanjutkan proses selanjutnya
    jika gagal tervalidasi maka program akan keluar tanpa melanjutkan proses
  3. menampilkan hasil dari convertDeOc(root, data)
  4. menjalankan proses exit
*/

void menu_DeHe(){
  int data;

  cout << "Masukkan Angka (decimal) yang ingin diubah ke Hexadecimal : ";
  cin >> data;
  validateInt(data);
  convertDeHe(root, data);
  exit(0);
}
/*
A. Deskripsi procedure menu_DeHe :
    1. menjalankan proses penginputan variable data
    2. menjalankan proses validasi dari input variable data oleh validateInt()
      dengan menggunakan parameter data dengan sistem passing by value
    3. menjalankan proses convertDeHe()
      dengan menggunakan parameter root dan data dengan sistem passing by value
    4. menjalankan proses exit

B. Kamus Data :
  1. data : variable tunggal bertipe integer

C. IS :
  1. variable data hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable data telah diisi oleh user
  2. menampilkan hasil dari validateInt(data),
    jika tervalidasi dengan benar maka melanjutkan proses selanjutnya
    jika gagal tervalidasi maka program akan keluar tanpa melanjutkan proses
  3. menampilkan hasil dari convertDeHe(root, data)
  4. menjalankan proses exit
*/

void menu_BiDe(){
  int data;

  cout << "Masukkan Angka (Biner) yang ingin diubah ke Decimal : ";
  cin >> data;
  validateInt(data);
  convertBiDe(root, data);
  exit(0);
}
/*
A. Deskripsi procedure menu_BiDe :
    1. menjalankan proses penginputan variable data
    2. menjalankan proses validasi dari input variable data oleh validateInt()
      dengan menggunakan parameter data dengan sistem passing by value
    3. menjalankan proses convertBiDe()
      dengan menggunakan parameter root dan data dengan sistem passing by value
    4. menjalankan proses exit

B. Kamus Data :
  1. data : variable tunggal bertipe integer

C. IS :
  1. variable data hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable data telah diisi oleh user
  2. menampilkan hasil dari validateInt(data),
    jika tervalidasi dengan benar maka melanjutkan proses selanjutnya
    jika gagal tervalidasi maka program akan keluar tanpa melanjutkan proses
  3. menampilkan hasil dari convertBiDe(root, data)
  4. menjalankan proses exit
*/

void menu_OcDe(){
  int data;

  cout << "Masukkan Angka (Octal) yang ingin diubah ke Decimal : ";
  cin >> data;
  validateInt(data);
  convertOcDe(root, data);
  exit(0);
}
/*
A. Deskripsi procedure menu_OcDe :
    1. menjalankan proses penginputan variable data
    2. menjalankan proses validasi dari input variable data oleh validateInt()
      dengan menggunakan parameter data dengan sistem passing by value
    3. menjalankan proses convertOcDe()
      dengan menggunakan parameter root dan data dengan sistem passing by value
    4. menjalankan proses exit

B. Kamus Data :
  1. data : variable tunggal bertipe integer

C. IS :
  1. variable data hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable data telah diisi oleh user
  2. menampilkan hasil dari validateInt(data),
    jika tervalidasi dengan benar maka melanjutkan proses selanjutnya
    jika gagal tervalidasi maka program akan keluar tanpa melanjutkan proses
  3. menampilkan hasil dari convertOcDe(root, data)
  4. menjalankan proses exit
*/

void menu_HeDe(){
  string hex;

  cout << "Contoh penginputan : 1A" << endl;
  cout << "Masukkan Angka (Hexadecimal) yang ingin diubah ke Decimal : ";

  cin >> hex;

  convertHeDe(root, hex);
  exit(0);
}
/*
A. Deskripsi procedure menu_HeDe :
    1. menjalankan proses penginputan variable hex
    2. menjalankan proses convertHeDe()
      dengan menggunakan parameter root dan hex dengan sistem passing by value
    3. menjalankan proses exit

B. Kamus Data :
  1. hex : variable tunggal bertipe string

C. IS :
  1. variable hex hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable hex telah diisi oleh user
  2. menampilkan hasil dari convertHeDe(root, hex)
  3. menjalankan proses exit
*/

void pil_menu(){
  int ch;

  system("cls");
  menu();
  cin >> ch;
  system("cls");
  switch(ch){
    case 1: menu_DeBi();
    case 2: menu_DeOc();
    case 3: menu_DeHe();
    case 4: menu_BiDe();
    case 5: menu_OcDe();
    case 6: menu_HeDe();
    case 7: exit(0);
  }
}
/*
A. Deskripsi procedure pil_menu :
    1. menjalankan proses penginputan variable ch
    2. menjalankan proses switch case dimana setiap pilihan memiliki procedure yang sudah dideklarasikan sebelumnya

B. Kamus Data :
  1. ch : variable tunggal bertipe integer

C. IS :
  1. variable ch hanya di deklarasikan sehingga masih memiliki nilai tidak tentu

D. FS :
  1. variable ch telah diisi oleh user
  2. menjalankan procedure yang sesuai dengan pilihan
    a. 1 untuk menu_DeBi
    b. 2 untuk menu_DeOc
    c. 3 untuk menu_DeHe
    d. 4 untuk menu_BiDe
    e. 5 untuk menu_OcDe
    f. 6 untuk menu_HeDe
    g. 7 untuk Exit
    h. ch > 7 untuk Exit
*/
