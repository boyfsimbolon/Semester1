/*
	NAMA: BOY FULL SIMBOLON
	NIM : 2281040
*/

#include<iostream.h>
using namespace std;

int usia;
int main()
{
	
	cout<<"Masukan usia BUDI (tahun): ";
	cin>>usia;
	if(usia<=3)
	{cout<<"BUDI tergolong sebagai Batita"<<endl;}
	else if(usia>3 && usia<6)
	{cout<<"BUDI tergolong sebagai Balita"<<endl;}
	else if(usia>5 && usia<12)
	{cout <<"BUDI tergolong sebagai Kanak-kanak"<< endl;}
	else if(usia>11 && usia<26)
	{cout <<"BUDI tergolong sebagai Remaja"<<endl;}
	else
	cout<<"Masukan usia RAHMAH (tahun): ";
	cin>>usia;
	if(usia<=3)
	{cout<<"RAHMAH tergolong sebagai Batita"<<endl;}
	else if(usia>3 && usia<6)
	{cout<<"RAHMAH tergolong sebagai Balita"<<endl;}
	else if(usia>5 && usia<12)
	{cout <<"RAHMAH tergolong sebagai Kanak-kanak"<< endl;}
	else if(usia >11 && usia<26)
	{cout <<"RAHMAH tergolong sebagai Remaja"<<endl;}
	else
	return 0;
}
