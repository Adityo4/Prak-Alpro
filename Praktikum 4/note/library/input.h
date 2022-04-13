#include <fstream>
#include <iostream>
#include "proses.h"
using namespace std;

class iterasi {
public:
  void input(int jum_bulan) {
    int subtot[jum_bulan];
    for (int bulan = 1; bulan <= jum_bulan; bulan++) {
      cout << "Masukan Total Pengeluaran Bulan ke " << bulan << " = ";
      cin >> subtot[bulan];
    }
    proses.hitung_tabungan(subtot, jum_bulan);
    
    
  }

private:
  ofstream tulis_data;
  proses proses;
};
