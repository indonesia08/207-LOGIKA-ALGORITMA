/*
207-LOGIKA-ALGORITMA
18 Oktober 2018
*/

#include <stdio.h>
#include <constrea.h>
#include <fstream>
#include <stdlib.h>
main()
{
    system("title Tugas Kelompok :207-LOGIKA-ALGORITMA");
    atas:
    clrscr();
    system ("color 1A");
    char nama_barang[50],ulang;
    int qty,harga,jumlah,bayar,kembali;
    cout<<"        Toko Serba Ada\n\n";
    cout<<"Transaksi Belanja\n";
    cout<<"-----------------\n";
    cout<<"Masukan Nama Barang      : ";gets(nama_barang);
    cout<<"Masukan QTY              : ";cin >> qty;
    cout<<"Masukan Harga            : ";cin >> harga;
    cout<<"------------------------------- x\n";
    jumlah =qty*harga;
    cout <<"\nTotal Pembelanjaan       : "<<jumlah<<endl;
    bayar2:
    cout<<"Masukan Pembayaran       : ";cin >> bayar;
    if (bayar<jumlah)
        {
            system ("color 0A");
            cout<<"Uang yang di bayar lebih kecil dari total belanja \n";
            goto bayar2;
        }
    else
        {
            system ("color 1A");
            cout<<"-------------------------------\n";
            kembali=bayar-jumlah;
            cout <<"\nUang Kembali        : "<<kembali<<endl;

            ofstream cetak_struk;
            cetak_struk.open("cetak_struk.TXT");
            cetak_struk
            <<"        Toko Serba Ada\n"<<endl
            <<"Transaksi Belanja\n"
            <<"-----------------\n"
            <<"Masukan Nama Barang     : "<<nama_barang<<endl
            <<"Masukan QTY             : "<<qty<<endl
            <<"Masukan Harga           : "<<harga<<endl
            <<"------------------------------- x"<<endl
            <<"\nTotal Pembelanjaan      : "<<jumlah<<endl
            <<"Masukan Pembayaran      : "<<bayar<<endl
            <<"-------------------------------"<<endl
            <<"\nUang Kembali            : "<<kembali<<endl
            <<"\nOleh Yusuf\n\n"
            <<endl;
            cetak_struk.close();
            system("notepad cetak_struk.TXT");
        }

   reload:
    cout<<" Transaksi Ulang [Y/T], Anggota Kelompok [A] ??";cin>>ulang;
    if (ulang =='Y' || ulang =='y')
        {    goto atas;    }
    else if (ulang =='T' || ulang =='t')
        {    exit(0);    }
    else if (ulang =='A' || ulang =='a')
        {
          system ("color 1A");
           cout<<"\nOleh Yusuf\n\n";
           goto reload;
       }
    else
        {    goto reload; }
    getch();
}
