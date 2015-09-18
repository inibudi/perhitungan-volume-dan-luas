#include <iostream>
#include <stdlib.h>
#include <conio.h>
#pragma hdrstop
using namespace std;

// Fungsi untuk menghitung volume bola
float volumeBola()
{
    clrscr();
    #define PI 3.14
    float V, rB;
    cout<<"Menghitung Volume Bola\n";
    cout<<"─────────────────────────────\n";
    cout<<"Masukkan jari-jari   : ";
    cin>>rB;
    V = 4.0 / 3.0 * PI * rB * rB * rB;
    cout<<"─────────────────────────────\n";
    cout<<"Volume bola = "<<V;
    cout<<"\n\n*Tekan Enter untuk kembali ke menu*";
    getchar();
}

// Fungsi untuk menghitung luas segitiga
float luasSegiTiga()
{
    clrscr();
    float a, t, Ls;
    cout<<"Menghitung Luas Segitiga\n";
    cout<<"─────────────────────────────\n";
    cout<<"Masukkan alas   : ";
    cin>>a;
    cout<<"Masukkan tinggi : ";
    cin>>t;
    Ls = a * t / 2;
    cout<<"─────────────────────────────\n";
    cout<<"Luas segitiga = "<<Ls;
    cout<<"\n\n*Tekan Enter untuk kembali ke menu*";
    getchar();
}

// Fungsi untuk menghitung luas permukaan kubus
float luasPermukaanKubus()
{
    clrscr();
    int s, Lpk;
    cout<<"Menghitung Luas Permukaan Kubus\n";
    cout<<"─────────────────────────────\n";
    cout<<"Masukkan panjang sisi kubus : ";
    cin>>s;
    Lpk = 6 * ( s * s );
    cout<<"─────────────────────────────\n";
    cout<<"Luas permukaan kubus = "<<Lpk;
    cout<<"\n\n*Tekan Enter untuk kembali ke menu*";
    getchar();
}

// Fungsi untuk menghitung luas Lingkaran
float luasPermukaanTabungTertutup()
{
    clrscr();
    float rP, tT, Lpt;
    cout<<"Menghitung Luas Permukaan Tabung Tertutup\n";
    cout<<"─────────────────────────────\n";
    cout<<"Masukkan jari-Jari : ";
    cin>>rP;
    cout<<"Masukkan tinggi tabung : ";
    cin>>tT;
    Lpt = 2 * PI * rP * ( rP + tT );
    cout<<"─────────────────────────────\n";
    cout<<"Luas permukaan tabung tertutup = "<<Lpt;
    cout<<"\n\n*Tekan Enter untuk kembali ke menu*";
    getchar();
}

// Fungsi utama
int main()
{
    int pil;
    do
    {
        // Menu perhitungan volume dan luas
        clrscr();
        cout<<"┌──────────────────────────────────────────────┐\n";
        cout<<"│         PERHITUNGAN VOLUME DAN LUAS          │\n";
        cout<<"├──────────────────────────────────────────────┤\n";
        cout<<"│ 1. Menghitung Volume Bola                    │\n";
        cout<<"│ 2. Menghitung Luas Segitiga                  │\n";
        cout<<"│ 3. Menghitung Luas Permukaan Kubus           │\n";
        cout<<"│ 4. Menghitung Luas Permukaan Tabung Tertutup │\n";
        cout<<"│ 5. Keluar                                    │\n";
        cout<<"├──────────────────────────────────────────────┤\n";
        cout<<"│ Dibuat oleh : Budi Sunaryo                   │\n";
        cout<<"│ NIM : 1520952006                             │\n";
        cout<<"│ Mata Kuliah : Pemrograman Komputer Lanjut    │\n";
        cout<<"└──────────────────────────────────────────────┘\n\n";
        cout<<" Masukkan Pilihan Anda : ";
        cin>>pil;

// mengeksekusi pilihan user
        switch (pil)
        {
        case 1: // jika pilihan=1
            volumeBola();
            break;
        case 2: //jika pilihan=2
            luasSegiTiga();
            break;
        case 3: // jika pilihan=3
            luasPermukaanKubus();
            break;
        case 4: // jika pilihan=4
            luasPermukaanTabungTertutup();
            break;
        case 5: // jika pilihan=5
            clrscr();
            cout<<"┌──────────────────────────────────────────────┐\n";
            cout<<"│ Program selesai, terima kasih :)             │\n";
            cout<<"│                                              │\n";
            cout<<"│ Dibuat oleh : Budi Sunaryo                   │\n";
            cout<<"│ NIM : 1520952006                             │\n";
            cout<<"│ Mata Kuliah : Pemrograman Komputer Lanjut    │\n";
            cout<<"└──────────────────────────────────────────────┘\n\n";
            break;
        default : // jika pilihan selain 1,2,3,4,5
            clrscr();
            cout<<"\n\n Maaf, Pilihan Tidak Tersedia !\n\n";
            break;
        }
        getchar();
    }
    while (pil!=5); // looping sampai Pilihan User = 5
}
