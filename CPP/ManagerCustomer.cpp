#include <bits/stdc++.h>
#include "Manager.cpp"
#include "CustomerService.cpp"
#pragma once
using namespace std;

class ManagerCustomer : public CustomerService, public Manager {
private:
    string rencanaPeningkatanPelayanan;
    string targetPelayanan;

public:
    ManagerCustomer(string nama = "", string nohp = "", string idPegawai = "", int LamaTahunBekerja = 0, 
                    int JumlahKeluhan = 0, float RatingPelanggan = 0, int JumlahAnggotaTim = 0, int TargetKinerja = 0, 
                    string rencanaPeningkatanPelayanan = "", string targetPelayanan = "") 
        : CustomerService(nama, nohp, idPegawai, LamaTahunBekerja, JumlahKeluhan, RatingPelanggan), 
          Manager(nama, nohp, idPegawai, LamaTahunBekerja, JumlahAnggotaTim, TargetKinerja) {
        this->rencanaPeningkatanPelayanan = rencanaPeningkatanPelayanan;
        this->targetPelayanan = targetPelayanan;
    }

    string getRencanaPeningkatanPelayanan() {
        return rencanaPeningkatanPelayanan;
    }

    void setRencanaPeningkatanPelayanan(string rencanaPeningkatanPelayanan) {
        this->rencanaPeningkatanPelayanan = rencanaPeningkatanPelayanan;
    }

    string getTargetPelayanan() {
        return targetPelayanan;
    }

    void setTargetPelayanan(string targetPelayanan) {
        this->targetPelayanan = targetPelayanan;
    }
};
