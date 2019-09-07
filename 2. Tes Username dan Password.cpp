#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i;
	char ch;
	string user, pass;
	for(i=1; i<=3; i++)
	{
		string user = "";
		string pass = "";
		cout<<"Username: ";cin>>user;
		cout<<"Password: ";cin>>pass;
	
	
	if(user=="yudha" && pass=="yud123")
	{
		cout<<"\n\nAnda Berhasil Login.\n"<<endl;
		return 0;
	}
	else
	{
		cout<<"\n\nMaaf Username & Password salah!!\n\n";
		return 0;
	}
	}
	getch();
}
