#include <stdio.h>
#include <constrea.h>
#include <stdlib.h>
#include <iostream.h>
#include <fstream.h>
#include <conio.h>

void main()
{
system("title Program Luas Kubus [Versi 1.1] - [github.com/indonesia08]");
system("color 61");
int sisi, luas;
char ulang(1);
do
{
cout <<"________________________________________________________________________\n";
cout <<"Program Hitung Luas Kubus C++ - [github.com/indonesia08]\n";
cout <<"________________________________________________________________________\n\n\n";
cout << "Masukan panjang sisi persegi =";
cin >> sisi;
luas = sisi * sisi;
cout <<"-------------------------------------\n";
cout <<" Lebar Sisi Persegi	= "<<sisi<<endl;
cout <<" Rumus luas persegi	= sisi x sisi\n";
cout <<" Luas persegi		= "<<sisi<<" * "<<sisi<<" = "<<luas<<endl;
cout <<"-------------------------------------\n\n";
cout <<"By Yusuf\n\n";

ofstream textbaru;
textbaru.open("/Cetak_luas_persegi.ay");
textbaru<<"_____________________________________________________________\n"<<endl;
textbaru<<"Program Hitung Luas Kubus C++ - [github.com/indonesia08]\n"<<endl;
textbaru<<"_____________________________________________________________\n\n\n"<<endl;
textbaru<<"Masukan panjang sisi persegi = "<<sisi<<endl;
textbaru<<"-------------------------------------\n"<<endl;
textbaru<<" Lebar Sisi Persegi	= "<<sisi<<endl;
textbaru<<" Rumus luas persegi	= sisi x sisi\n"<<endl;
textbaru<<" Luas persegi		= "<<sisi<<" * "<<sisi<<" = "<<luas<<endl;
textbaru<<"-------------------------------------\n\n"<<endl;
textbaru<<"By Yusuf"<<endl;
textbaru<<"\n\Reload Program/Cetak?(r/c)	: "<<ulang<<endl;
textbaru.close();

cout <<"\n\Reload Program/Cetak?(r/c)	: ";cin >> ulang;
}

while(ulang=='r');
 system( "notepad.exe /Cetak_luas_persegi.ay" );
getch();
}
