#include<iostream>

using namespace std;

int main()
{
	int a,b;
	int sisi;
	cout<<"Masukkan Angka  Untuk Menggambar Segitiga: ";
	cin>>sisi;
	for(a=sisi;a>=0;a--)
	{for(b=0;b<sisi-a;b++)
	{
	cout<<" ";
	}
	for(b=0;b<2*a-1;b++)
	{
	if(a==0 || a==sisi)
	{cout<<"*";
		}	
		else if(b==0 || b==2*a-2)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
	}
	cout<<"\n";
	}
	return(0);
	
}
