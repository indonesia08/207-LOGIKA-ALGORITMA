#include <stdio.h>
#include <CONSTREA.H>
void main()
{
int angka1, angka2 , tambah, kali, kurangi1, kurangi2;
cout << "Masukan angka 1 : ";
cin >> angka1;
cout << "Masukan angka 2 : ";
cin >> angka2;
tambah = angka1 + angka2;
kali = angka1 * angka2;
kurangi1 = angka2 - angka1;           
kurangi2 = angka1 - angka2;
cout <<"-------------------------------------\n";
cout <<" Hasil penjumlahan	:"<<angka1<<" + "<<angka2<<" = "<<tambah<<endl;
cout <<" Hasil perkalian	:"<<angka1<<" * "<<angka2<<" = "<<kali<<endl;
cout <<" Hasil pengurangan	:"<<angka2<<" - "<<angka1<<" = "<<kurangi1<<endl;
cout <<" Hasil pengurangan	:"<<angka1<<" - "<<angka2<<" = "<<kurangi2<<endl;
cout <<"-------------------------------------\n";
cout <<"By Yusup";
getch();
}
