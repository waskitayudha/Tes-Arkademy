#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main()
{
	int i=0;
	int vk=0;
	int x;
	char kalimat[20];
	
	cout<<"Silahkan Masukkan Kalimat :";
	cin.getline(kalimat,250);
	x=strlen(kalimat);
	for(i=0;i<x;i++)
	{
		if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
		vk++;
		
	}
	cout<<"Jumlah Huruf Vokal\t :"<<vk<<" Huruf"<<endl;
	getch();
	
}

