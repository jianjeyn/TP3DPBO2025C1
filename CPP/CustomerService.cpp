#pragma once
#include <bits/stdc++.h>
#include "Pegawai.cpp"
using namespace std;

class CustomerService : public Pegawai {
private:
    int JumlahKeluhan;
    float RatingPelanggan;

public:
    CustomerService(string nama = "", string nohp = "", string idPegawai = "", int LamaTahunBekerja = 0, int JumlahKeluhan = 0, float RatingPelanggan = 0) 
        : Pegawai(nama, nohp, idPegawai, LamaTahunBekerja) {
        this->JumlahKeluhan = JumlahKeluhan;
        this->RatingPelanggan = RatingPelanggan;
    }

    int getJumlahKeluhan() {
        return JumlahKeluhan;
    }

    void setJumlahKeluhan(int JumlahKeluhan) {
        this->JumlahKeluhan = JumlahKeluhan;
    }

    float getRatingPelanggan() {
        return RatingPelanggan;
    }

    void setRatingPelanggan(float RatingPelanggan) {
        this->RatingPelanggan = RatingPelanggan;
    }
};
