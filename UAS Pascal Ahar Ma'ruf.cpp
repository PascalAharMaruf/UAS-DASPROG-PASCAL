#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std ;

int nomorWahana, jumlahTiket ;

void macamMacamWahana (string namaNamaWahana){
    cout << namaNamaWahana << endl ;
}

void hargaTiket (string namaWahana, int harga){
    cout << namaWahana << "= " << harga << endl ;
}

struct Wahana{
  string nama;
  long harga;
};

vector<Wahana> daftarWahana{
  {"Komedi putar", 5000},
  {"Bianglala", 10000},
  {"Ombak Banyu", 10000},
  {"Rumah hantu", 5000},
  {"Kereta api mini", 5000},
  {"Mandi bola", 5000}
};

void pembelianTiket(int nomorWahana, int jumlahTiket) {
    if (nomorWahana > 0 && nomorWahana <= daftarWahana.size()) {
    cout << "Masukkan jumlah tiket : "; cin >> jumlahTiket;
        if (jumlahTiket > 0) cout << "Total harga : Rp " << jumlahTiket * daftarWahana[nomorWahana - 1].harga;
        else cout << "Masukkan jumlah tiket dengan benar!";
        }else cout << "Tidak ada pilihan wahana!";
}

int main (){
    int pilih ;
    mymenu :
    cout << "=============== SELAMAT DATANG DI APLIKASI WAHANA MALAM ===============" << endl ;
    cout << "\n================================= MENU ================================\n" << endl ;
    string menu[3]={"1. Macam - Macam Wahana", "2. Harga Tiket", "3. Pembelian Tiket"} ;
    for (int i=0;i<3;i++){
        cout << menu[i] << endl ;
    }
    cout << "\n=======================================================================" << endl ;
    cout << "Pilih Menu : " ;
    cin >> pilih;
    system("cls");
    if (pilih==1){
        cout << "======================= Macam - Macam Wahana ==========================\n " << endl ;
        macamMacamWahana ("1. Komedi Putar\t\t ") ;
        macamMacamWahana ("2. Bianglala\t\t ") ;
        macamMacamWahana ("3. Ombak Banyu\t\t ") ;
        macamMacamWahana ("4. Rumah Hantu\t\t ") ;
        macamMacamWahana ("5. Kereta Api Mini\t ") ;
        macamMacamWahana ("6. Mandi Bola\t\t ") ;
        cout << "\nKetik '9' untuk kembali ke menu utama\n" ;
        cout << "Ketik Di Sini : " ;
        cin >> pilih ;
        system("cls");
        if (pilih==9){
            goto mymenu ;
        }
    }else if (pilih==2){
        cout << "=========================== Harga Tiket ===============================\n " << endl ;
        hargaTiket ("1. Komedi Putar\t\t ", 5000) ;
        hargaTiket ("2. Bianglala\t\t ", 10000) ;
        hargaTiket ("3. Ombak Banyu\t\t ", 10000) ;
        hargaTiket ("4. Rumah Hantu\t\t ", 5000) ;
        hargaTiket ("5. Kereta Api Mini\t ", 5000) ;
        hargaTiket ("6. Mandi Bola\t\t ", 5000) ;
        cout << "\nKetik '9' untuk kembali ke menu utama\n" ;
        cout << "Ketik Di Sini : " ;
        cin >> pilih ;
        system("cls");
        if (pilih==9){
            goto mymenu ;
        }
    }else if (pilih==3){
        cout << "=========================== Pembelian Tiket ===========================\n\n";
          for (int i = 0; i < daftarWahana.size(); i++) cout << i + 1 << ". " << daftarWahana[i].nama << " : Rp " << daftarWahana[i].harga << "\n";
          cout << "\n\nPilih wahana (1 - " << daftarWahana.size() << ") : "; cin >> nomorWahana;
          pembelianTiket(nomorWahana, jumlahTiket);
    }
}


