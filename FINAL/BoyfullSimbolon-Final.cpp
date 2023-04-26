/*
	Nama: Boy Full Simbolon
	NIM: 2281040
*/

#include<stdio.h>
#include<iostream>

using namespace std;
int BfSpilih,BfSlagi,BfSanakayam,BfSjumlah,BfSNIM;
char BfSulang;

void BfSbiodata();

void BfSsong();

void BfSdata();

void BfSnilai();


int main()
{do{cout<<"Tugas Final Semester\n1. Biodata\n2. Pendataan Mahasiswa\n3. Lirik lagu Anak Ayam\n4. Nilai Mahasiswa\n5. Pemberisahan memory dari aplikasi"<<endl;
cout<<"Masukan Pilihan anda: ";
cin>>BfSpilih;
switch(BfSpilih)
{
case 1:
BfSbiodata();
break;
case 2:
BfSdata();
break;
case 3:
BfSsong();
break;
case 4:
BfSnilai();
break;
case 5:
system("cls");
break;

default:;}


    cout << "jika ingin mengulang tekan y, jika tidak tekan t: ";
    cin >> BfSulang;
    cout << endl;
	 }
  while (BfSulang!= 't');
 
  cout << "Terimakasih...";
 
  cout << endl;
return 0;}

  

void BfSbiodata()
{printf("Nama   : Boy Full Simbolon\nNIM    : 2281040\nJurasan: Teknik Informatika\n");}

void BfSsong()
{int BfSanakayam;
	

cout<<"Masukan Jumlah Anak ayam: ";
cin>>BfSanakayam;

while(BfSanakayam>1)
{cout<<"Tek, kotek-kotek\nAnak Ayam, turunlah berkotek\nTek, kotek-kotek\nAnak Ayam, turunlah berkotek\n";
cout<<"Anak ayam turunlah "<<BfSanakayam<<endl;
cout<<"Mati satu tinggallah "<<--BfSanakayam<<endl;
if(BfSanakayam==1)
{cout<<"Anak ayam turunlah "<<BfSanakayam<<endl;
cout<<"Mati satu tinggal Induknya"<<endl;
}else
{
	cout<<"Anak ayam turunlah "<<BfSanakayam<<endl;
	cout<<"Mati satu tinggallah"<<BfSanakayam-1<<endl;
}
BfSanakayam--;
}}
void BfSdata()
{int BfSBanyak, BfSurut;
cout<<"Masukan Banyak Mahasiwa yang akan Diinput: ";
cin>>BfSBanyak;
cout<<"NIM Mahasiswa: "<<endl;

int BfSNIM[BfSBanyak];

for(int BfSi=1;BfSi<=BfSBanyak;BfSi++){
cout<<"NIM Mahasiswa ke-"<<BfSi<<" : ";
cin>>BfSNIM[BfSi];
}
cout<<endl;

for(int BfSj=1;BfSj<=BfSBanyak;BfSj++){
for(int BfSk=1;BfSk<=BfSBanyak;BfSk++){
if(BfSNIM[BfSj]<BfSNIM[BfSk]){
BfSurut =BfSNIM[BfSk];
BfSNIM[BfSk] = BfSNIM[BfSj];
BfSNIM[BfSj] = BfSurut;
}
}
}

cout<<"Urutan NIM dari kecil ke besar :"<<endl;
for(int BfSi=1;BfSi<=BfSBanyak;BfSi++){
cout<<"NIM Mahasiwa ke- "<<BfSi<<": "<<BfSNIM[BfSi]<<endl;;
}}
void BfSnilai()
{int BfSbaris,BfSkolom;

	cout<<"Masukan banyak mahasiswa yang akan diinput: ";
	cin>>BfSbaris;
	cout<<"Masukan banyak tugas yang akan di input: ";
	cin>>BfSkolom;
   int BfSNilai[BfSbaris][BfSkolom+1]; 
    for(int BfSi = 1; BfSi<=BfSbaris; BfSi++){
        
        for(int BfSj=1; BfSj<=BfSkolom+1; BfSj++){
            if(BfSj==1){
                cout<<"Masukan NIM dari Mahasiswa ke-"<<BfSi<<": ";
                cin>>BfSNilai[BfSi][BfSj+1];
            }
            else{
            cout<<"Masukan nilai Tugas ke-"<<BfSj-1<<": ";
            cin>>BfSNilai[BfSi][BfSj+1];
            }
        }
    }
    cout<<endl;
    for(int BfSj=1; BfSj<=BfSkolom+1; BfSj++){
    	
   if(BfSj==1){cout<<"NO.\tNIM";}
   if(BfSj>1)
   {cout<<"\tTugas-"<<BfSj-1;}
   if(BfSj==BfSkolom+1)
   {cout<<"\tRatarata\tGrade";}}
   cout<<endl;
    
    for(int BfSi = 1; BfSi<=BfSbaris; BfSi++){
        float BfSratarata=0;   
        cout<<BfSi;
        for(int BfSj=1; BfSj<=BfSkolom+1; BfSj++){
            cout<<"\t"<<BfSNilai[BfSi][BfSj+1];
					if(BfSj>1){
                
                BfSratarata += BfSNilai[BfSi][BfSj+1];	
            }
				}
        
        cout<<"\t"<<BfSratarata/BfSkolom<<"\t\t";
         if(BfSratarata/BfSkolom>=91 && BfSratarata/BfSkolom<=100)
        {cout<<"A";}
    else if(BfSratarata/BfSkolom>=86 && BfSratarata/BfSkolom<=90)
        {cout<<"A-";}
    else if(BfSratarata/BfSkolom>=81 && BfSratarata/BfSkolom<=85)
        {cout<<"B+";}
    else if(BfSratarata/BfSkolom>=76 && BfSratarata/BfSkolom<=80)
        {cout<<"B";}
    else if(BfSratarata/BfSkolom>=71 && BfSratarata/BfSkolom<=75)
        {cout<<"B-";}
    else if(BfSratarata/BfSkolom>=66 && BfSratarata/BfSkolom<=70)
        {cout<<"C+";}
    else if(BfSratarata/BfSkolom>=61 && BfSratarata/BfSkolom<=65)
        {cout<<"C";}
    else if(BfSratarata/BfSkolom>=56 && BfSratarata/BfSkolom<=60)
        {cout<<"C-";}
	else if(BfSratarata/BfSkolom>=51 && BfSratarata/BfSkolom<=55)
        {cout<<"D+";}
 	else if(BfSratarata/BfSkolom>=46 && BfSratarata/BfSkolom<=50)
        {cout<<"D";} 
	else
        {cout<<"F";}

        cout<<endl;
    }
	
}
	
	