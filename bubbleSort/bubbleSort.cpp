#include <iostream>
using namespace std;


int a[20];      //Deklarasi array a dengan ukuran 20
int n;          //Deklarasi variabel n untu menyimpan banyaknya elemen pada array


void input() {   //prosedur untuk input
    while (true) {    //looping
        cout << "masukkan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;      //input dari penggguna
        if (n <= 20)   //jika n kurang dari satu atau sama dengan 20
            break;     //keluar dari loop
        else {         // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 eleman. \n";  //output ke layar
        }
    }
    cout << endl;                         // output baris kosong
    cout << "===================" << endl;  //output ke layar
    cout << " masukkann elemen array" << endl;  // output ke layar
    cout << "===================" << endl;      // output ke layar

    for (int i = 0; i < n; i++) {   //looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke- " << (i + 1) << ": ";  // output ke layar
        cin >> a[i];
    }
}

void display() { //prosedur untuk menampilkan hasil
    cout << endl;     //output baris kosong
    cout << "==============" << endl;  //output ke layar
    cout << "element array yang telah tersusun" << endl;   //output ke layar
    cout << "==============" << endl;  //output ke layar
    for (int j = 0; j < n; j++) { //looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;     //output ke layar
    }
    cout << endl;               //output baris kosong
}

void bubbleSortArray() {    // procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) { //looping dengan i mulai dar1 1 hingga n-1
        for (int j = 0; j < n - i; j++) {  //looping dengan j mulai dar1 0 hingga n-i
            if (a[j] > a[j + 1]) {   //jika nilai pada a[j} lebih besar dari a[j+1]
                int temp = a[j];       //simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + 1];        //assign nilai a[j + 1] ke a[j]
                a[j + 1] = temp;         // assign nilai temp ke a[j + 1]
            }
        }
    }
}


int main() {
    input();    // memanggil read()
    bubbleSortArray();  //memanggil bubbleSortArray()
    display();   //memanggil display
    return 0;
}
