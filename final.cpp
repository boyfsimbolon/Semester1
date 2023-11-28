#include <iostream>
#include <stdio.h>

using namespace std;
#define MAX_MAHASISWA 100
// Nilai Maksimum

int data[MAX_MAHASISWA]; // Mendeklarasikan array global

void biodata() {
    printf("Nama   : Boy Full Simbolon\nNIM    : 2281040\nJurasan: Teknik Informatika\nQoutes: Hanya Cukup mengaguminya");
}

int inputMhs() {
    int n, temp;
    // Menerima input jumlah mahasiswa
    cout << "Masukan banyak mahasiswa yang ingin diurutkan: ";
    cin >> n;

    // Menginput data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    // Mengurutkan data mahasiswa
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    return 0;
}

void inputNilai(int data[], int n) {

  int nilai[n][5]; 
  float ratarata;

  if (data[0] == 0) {
    inputMhs(); 
  }

  for (int i = 0; i < n; i++) {
    if (data[i] != 0) {
      cout << "Nilai mahasiswa dengan NIM " << data[i] << ":\n";
      
      for (int j = 0; j < 3; j++) {
        cout << "Nilai Ujian ke-" << j+1 << ": ";
        cin >> nilai[i][j];
      }

      cout << "Nilai UTS: ";
      cin >> nilai[i][3];

      cout << "Nilai Final: ";
      cin >> nilai[i][4];

    } else {
      break; 
    }
    
    cout << endl;
  }
  
  cout << "NIM\tUjian-1\tUjian-2\tUjian-3\tUTS\tFinal\tTotal\tGrade\n";
	float uts,final;
  for (int i = 0; i < n; i++) {
    if (data[i] != 0) {
      
      cout << data[i] << "\t";
      ratarata = 0;
      for (int j = 0; j < 5; j++) {
      	cout << nilai[i][j] << "\t";
        if(j==3){
        	 uts = nilai[i][j] * 0.3;
        }
        else if(j==4){
      	final = nilai[i][j] * 0.2;
        }else{        	
        	ratarata += nilai[i][j]; 
        }
      }
      ratarata = (ratarata / 3) * 0.5 + uts + final;
      cout<<ratarata<<"\t";
      if (ratarata >= 91) cout << "A";
      else if (ratarata >= 86) cout << "A-";
      else if (ratarata >= 81) cout << "B+";
      else if (ratarata >= 76) cout << "B";
      else if (ratarata >= 71) cout << "B-";
      else if (ratarata >= 66) cout << "C+"; 
      else if (ratarata >= 60) cout << "C";
      else if (ratarata >= 55) cout << "C-";
      else if (ratarata >= 50) cout << "D+";
      else if (ratarata >= 45) cout << "D";    
      else cout << "F";
      cout << endl;
    } else {
      break;
    }
  }
}
void tampilkan(int data[], int n) {
    if (data[0] == 0) {
        inputMhs();
    }
    // Menampilkan data mahasiswa
    for (int i = 0; i < n; i++) {
        if (data[i] != 0) {
            cout << "NIM Mahasiswa ke-" << i + 1 << ": " << data[i] << endl;
        } else {
            break;
        }
    }
}

void lagu() {
    int anakayam;

    cout << "Masukan Jumlah Anak ayam: ";
    cin >> anakayam;
    cout << "Tek, kotek kotek kotek\nAnak Ayam, turun berkotek\nTek, tek, kotek kotek kotek\nAnak Ayam, turun berkotek\n";
    while (anakayam >= 1) {
        cout << "Tek, kotek kotek kotek\nAnak Ayam, turun berkotek\nTek, tek, kotek kotek kotek\nAnak Ayam, turun berkotek\n";
        if (anakayam > 1) {
            cout << "Anak ayam turunlah " << anakayam << endl;
            cout << "Mati satu tinggallah " << --anakayam << endl;
        }
        if (anakayam == 1) {
            cout << "Anak ayam turunlah " << anakayam << endl;
            cout << "Mati satu tinggal Induknya" << endl;
        } else {
            cout << "Anak ayam turunlah " << anakayam << endl;
            cout << "Mati satu tinggallah" << anakayam - 1 << endl;
        }
        anakayam--;
    }
}

void prima() {
    int angka;
    for (int i = 1; i <= 20; i++) {
        angka = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                angka += 1;
            }
        }
        if (angka == 2) {
            cout << i << " PRIMA" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    int pil;
    do {
        // Menerima input pilihan
        cout << "Masukan pilihan anda: ";
        cin >> pil;
        // Memilih fungsi yang akan dijalankan
        switch (pil) {
            case 1:
                biodata();
                break;
            case 2:
                tampilkan(data, MAX_MAHASISWA);
                break;
            case 3:
                lagu();
                break;
            case 4:
                inputNilai(data, MAX_MAHASISWA);
                break;
            case 5:
                prima();
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pil != 0);

    return 0;
}
