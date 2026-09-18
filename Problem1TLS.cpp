#include <iostream>
using namespace std;

int main() 
{
    int jumlahastronotN, nilaieliminasiK, sisa, hitung, elim, nomoreliminasi, N;
    int astronot[1000];

    cout << "Jumlah Astronot (N) : ";
    cin >> jumlahastronotN;

    cout << "Nilai Eliminasi (K) : ";
    cin >> nilaieliminasiK;

    cout << endl << "Astronot yang dieliminasi : " << endl;

    for (N = 0; N <= jumlahastronotN - 1; N++) {
        astronot[N] = N + 1;
    }

    sisa = jumlahastronotN;
    hitung = 0;

    while (sisa > 1) {
        elim = (hitung + nilaieliminasiK - 1) % sisa;
        nomoreliminasi = astronot[elim];

        cout << nomoreliminasi << ", ";

        for (N = elim; N <= sisa - 2; N++) {
            astronot[N] = astronot[N + 1];
        }

        sisa = sisa - 1;
        hitung = elim % sisa;

        if (nomoreliminasi % 2 == 0) {
            nilaieliminasiK = nilaieliminasiK + 2;
        } else {
            nilaieliminasiK = nilaieliminasiK - 1;
        }

        if (nilaieliminasiK < 2) {
            nilaieliminasiK = 2;
        }
    }

    cout << endl << endl << "Astronot Akhir : ";
    cout << astronot[0] ;

    return 0;
}
