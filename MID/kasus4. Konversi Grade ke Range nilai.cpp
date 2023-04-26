/*
	Nama: Boy Full Simbolon
	NIM: 2281040
*/

#include<iostream.h>
using namespace std;
char grade;
int main(){
	do{
	cout<<"Masukkan Grade: ";
	cin>>grade;
	switch (grade)
	{case 'A':
	cout<<"Selamat, nilai kamu berada di kisaran 91-100!"<<endl;
	break;
	case 'B':
	cout<<"Selamat, nilai kamu berada di kisaran 81-90!"<<endl;
	break;
	case 'C':
	cout<<"Selamat, nilai kamu berada di kisaran 71-80!"<<endl;
	break;
	case 'D':
	cout<<"Selamat, nilai kamu berada di kisaran 61-70!"<<endl;
	break;
	case 'F':
	cout<<"Selamat, nilai kamu berada di kisaran 51-60!"<<endl;
	break;

	}}
	cout<<"Masukkan Grade: ";
	cin>>grade;
	switch (grade)
	{case 'A':
	cout<<"Selamat, nilai kamu berada di kisaran 91-100!"<<endl;
	break;
	case 'B':
	cout<<"Selamat, nilai kamu berada di kisaran 81-90!"<<endl;
	break;
	case 'C':
	cout<<"Selamat, nilai kamu berada di kisaran 71-80!"<<endl;
	break;
	case 'D':
	cout<<"Selamat, nilai kamu berada di kisaran 61-70!"<<endl;
	break;
	case 'F':
	cout<<"Selamat, nilai kamu berada di kisaran 51-60!"<<endl;
	break;
	default:
	break;
	while(grade!='A','B','C','D','F');
	cout<<endl;
	
	return 0;
}