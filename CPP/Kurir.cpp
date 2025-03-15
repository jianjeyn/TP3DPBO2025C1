#include <bits/stdc++.h>
#include "Pegawai.cpp"
#pragma once
using namespace std;

class Kurir : public Pegawai {
private:
    string JenisKurir;
    string WilayahPengantaran;

public:
    Kurir(string nama = "", string nohp = "", string idPegawai = "", int LamaTahunBekerja = 0, string JenisKurir = "", string WilayahPengantaran = "") 
        : Pegawai(nama, nohp, idPegawai, LamaTahunBekerja) {
        this->JenisKurir = JenisKurir;
        this->WilayahPengantaran = WilayahPengantaran;
    }

    string getJenisKurir() {
        return JenisKurir;
    }

    void setJenisKurir(string JenisKurir) {
        this->JenisKurir = JenisKurir;
    }

    string getWilayahPengantaran() {
        return WilayahPengantaran;
    }

    void setWilayahPengantaran(string WilayahPengantaran) {
        this->WilayahPengantaran = WilayahPengantaran;
    }
};
