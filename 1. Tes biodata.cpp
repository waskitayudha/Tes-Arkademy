#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
main()
{
	char nama[20], umur[20], alamat[50], hobi[20], status[20], sekolah[50], kemampuan[50], ketertarikan_coding[50];

	cout<<"===========Isi Biodata===========";
	cout<<"\n\n";
	
	cout<<"Nama Lengkap: ";cin.getline(nama, 20);
	cout<<"Umur: ";cin.getline(umur, 20);
	cout<<"Alamat: ";cin.getline(alamat, 50);
	cout<<"Hobi: ";cin.getline(hobi, 20);
	cout<<"Status: ";cin.getline(status, 20);
	cout<<"Sekolah: ";cin.getline(sekolah, 50);
	cout<<"Kemampuan: ";cin.getline(kemampuan, 50);
	cout<<"Ketertarikan dengan Coding: ";cin.getline(ketertarikan_coding, 50);
	cout<<endl;
	

	cout<<"===========Output===========";
	cout<<"\n\n";

	cout<<"Nama Lengkap: "<<nama<<endl;
	cout<<"Umur: "<<umur<<endl;
	cout<<"Alamat: "<<alamat<<endl;
	cout<<"Hobi: "<<hobi<<endl;
	cout<<"Status: "<<status<<endl;
	cout<<"Sekolah: "<<sekolah<<endl;
	cout<<"Kemampuan: "<<kemampuan<<endl;
	cout<<"Ketertarikan dengan Coding: "<<ketertarikan_coding<<endl;
	cout<<"\n\n";
	getch();
	
}
