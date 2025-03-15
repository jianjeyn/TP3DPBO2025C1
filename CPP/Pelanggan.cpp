#include <bits/stdc++.h>
#include "Manusia.cpp"
#include "Pengiriman.cpp"
#include <vector>
#pragma once
using namespace std;

class Pelanggan : public Manusia {
private:
    string idPelanggan;
    string alamat;
    vector<Pengiriman> pengirimanList;  // Changed to use vector for multiple deliveries

public:
    Pelanggan(string nama = "", string nohp = "", string idPelanggan = "", string alamat = "", vector<Pengiriman> pengirimanList = {}) 
        : Manusia(nama, nohp) {
        this->idPelanggan = idPelanggan;
        this->alamat = alamat;
        this->pengirimanList = pengirimanList;
    }

    string getidPelanggan() {
        return idPelanggan;
    }

    void setidPelanggan(string idPelanggan) {
        this->idPelanggan = idPelanggan;
    }

    string getalamat() {
        return alamat;
    }

    void setalamat(string alamat) {
        this->alamat = alamat;
    }

    vector<Pengiriman> getPengiriman() {
        return pengirimanList;
    }

    void setPengiriman(vector<Pengiriman> pengirimanList) {
        this->pengirimanList = pengirimanList;
    }
};
