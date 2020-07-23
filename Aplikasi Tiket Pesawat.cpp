#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
main()
{
char nama[50],kode,tujuan_pesawat[15],pesawat[20],yes;
int harga,beli,total,bayar,kembali,kelas;
atas:
printf("**********************************************\n");
printf("\tBIMA SATRYA GARUDA TRAVEL\n");
printf("**********************************************\n");
cout<<"\tDestination:\n";
cout<<"\tJakarta-->Singapore\n";
cout<<"\tJakarta-->Taipei\n";
cout<<"\tJakarta-->Madinah\n";
cout<<"\tJakarta-->Kyoto\n";
cout<<"**********************************************\n";
cout<<"Class\n";
cout<<"1.Economy\n";
cout<<"2.Business\n";
cout<<"3.VIP\n";
cout<<"Nama : ";cin.getline(nama,50);
cout<<"Tujuan Pesawat [S/T/M/K]: ";cin>>kode;
cout<<"Nama Pesawat : ";cin>>pesawat;
cout<<"Kelas : ";cin>>kelas;
cout<<"Jumlah Pemesanan : ";cin>>beli;

if (kode=='S' || kode=='s')
{
strcpy(tujuan_pesawat,"Jakarta-Singapore");
if (kelas==1)
harga=1050000;
else if(kelas==2)
harga=2100000;
else if(kelas==3)
harga=3401000;
else
cout<<"kode anda salah"<<endl<<endl;
}

else if (kode=='T' || kode=='t')
{
strcpy(tujuan_pesawat,"Jakarta-Taipei");
if (kelas==1)
harga=1800000;
else if(kelas==2)
harga=2850000;
else if(kelas==3)
harga=4015000;
else
cout<<"kode anda salah"<<endl<<endl;
}

else if (kode=='M' || kode=='m')
{
strcpy(tujuan_pesawat,"Jakarta-->Madinah");
if (kelas==1)
harga=10200000;
else if(kelas==2)
harga=10500000;
else if(kelas==3)
harga=30000000;
else
cout<<"kode anda salah"<<endl<<endl;

}
else if (kode=='K' || kode=='k')
{
strcpy(tujuan_pesawat,"Jakarta-->Kyoto");
if (kelas==1)
harga=1200000;
else if(kelas==2)
harga=2500000;
else if(kelas==3)
harga=3000000;
else
cout<<"kode anda salah"<<endl<<endl;

}
else
cout<<"ANDA SALAH MEMASUKAN KODE"<<endl;

total=beli*harga;

printf("\tTRANSAKSI PENJUALAN TIKET PESAWAT\n");
printf("**********************************************\n\n");
cout<<"Nama : "<<nama<<endl;
cout<<"Tujuan Pesawat : "<<tujuan_pesawat<<endl;
cout<<"Nama Pesawat : "<<pesawat<<endl;
cout<<"Kelas : "<<kelas<<endl;
cout<<"Harga : "<<harga<<endl;
cout<<"Jumlah Pemesanan : "<<beli<<endl;
cout<<"Total Harga : "<<total<<endl<<endl;


printf("\tPEMBAYARAN\n");
printf("****************************************\n\n");
cout<<"Uang Bayar : ";cin>>bayar;
kembali=bayar-total;
cout<<"Uang Kembali : "<<kembali<<endl<<endl;
cout<<"_____________TERIMAKASIH_________________"<<endl<<endl;


bawah:
cout<<" Anda Ingin Mencoba Lagi ????"<<endl;
cout<<" Tekan Y atau N : "; cin>>yes;
if(yes=='Y'||yes=='y')
{

goto atas;
}
else if(yes=='N'||yes=='n')
{

cout<<"\n THANK YOU";
}
else{

cout<<"\n THANK YOU";
}
return 0;
}
