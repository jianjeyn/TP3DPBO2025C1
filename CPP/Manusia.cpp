#include <bits/stdc++.h>
#pragma once
using namespace std;

class Manusia {
private:
    string nama;
    string nohp;

public:
    Manusia(string nama = "", string nohp = "") {
        this->nama = nama;
        this->nohp = nohp;
    }

    string getNama() {
        return nama;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    string getnohp() {
        return nohp;
    }

    void setnohp(string nohp) {
        this->nohp = nohp;
    }
};
