#include <bits/stdc++.h>
#include "Kurir.cpp"
#pragma once

// Forward declare Kurir class
class Kurir;

using namespace std;

class Pengiriman {
private:
    string IdPengiriman;
    string StatusPengiriman;
    vector<Kurir> kurirList;
    float BeratPaket;
    string JenisPaket;

public:
    Pengiriman(string IdPengiriman, string StatusPengiriman, vector<Kurir> kurirList, int BeratPaket, string JenisPaket) {
        this->IdPengiriman = IdPengiriman;
        this->StatusPengiriman = StatusPengiriman;
        this->kurirList = kurirList;
        this->BeratPaket = BeratPaket;
        this->JenisPaket = JenisPaket;
    }



    string getIdPengiriman() {
        return IdPengiriman;
    }

    void setIdPengiriman(string IdPengiriman) {
        this->IdPengiriman = IdPengiriman;
    }

    string getStatusPengiriman() {
        return StatusPengiriman;
    }

    void setStatusPengiriman(string StatusPengiriman) {
        this->StatusPengiriman = StatusPengiriman;
    }

    vector<Kurir> getKurir() {
        return kurirList;
    }

    void setKurir(vector<Kurir> kurirList) {
        this->kurirList = kurirList;
    }

    int getBeratPaket() {
        return BeratPaket;
    }

    void setBeratPaket(int BeratPaket) {
        this->BeratPaket = BeratPaket;
    }

    string getJenisPaket() {
        return JenisPaket;
    }

    void setJenisPaket(string JenisPaket) {
        this->JenisPaket = JenisPaket;
    }
};


