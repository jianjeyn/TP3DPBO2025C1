#include <bits/stdc++.h>
#include "Manusia.cpp"
#pragma once
using namespace std;

class Pegawai : public Manusia {
private:
    string idPegawai;
    int LamaTahunBekerja;

public:
    Pegawai(string nama = "", string nohp = "", string idPegawai = "", int LamaTahunBekerja = 0) : Manusia(nama, nohp) {
        this->idPegawai = idPegawai;
        this->LamaTahunBekerja = LamaTahunBekerja;
    }

    string getidPegawai() {
        return idPegawai;
    }

    void setidPegawai(string idPegawai) {
        this->idPegawai = idPegawai;
    }

    int getLamaTahunBekerja() {
        return LamaTahunBekerja;
    }

    void setLamaTahunBekerja(int LamaTahunBekerja) {
        this->LamaTahunBekerja = LamaTahunBekerja;
    }
};
