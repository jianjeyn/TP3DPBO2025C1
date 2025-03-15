#include <bits/stdc++.h>
#include "Pegawai.cpp"
#pragma once
using namespace std;

class Manager : public Pegawai {
private:
    int JumlahAnggotaTim;
    int TargetKinerja;

public:
    Manager(string nama = "", string nohp = "", string idPegawai = "", int LamaTahunBekerja = 0, int JumlahAnggotaTim = 0, int TargetKinerja = 0) 
        : Pegawai(nama, nohp, idPegawai, LamaTahunBekerja) {
        this->JumlahAnggotaTim = JumlahAnggotaTim;
        this->TargetKinerja = TargetKinerja;
    }

    int getJumlahAnggotaTim() {
        return JumlahAnggotaTim;
    }

    void setJumlahAnggotaTim(int JumlahAnggotaTim) {
        this->JumlahAnggotaTim = JumlahAnggotaTim;
    }

    int getTargetKinerja() {
        return TargetKinerja;
    }

    void setTargetKinerja(int TargetKinerja) {
        this->TargetKinerja = TargetKinerja;
    }
};
