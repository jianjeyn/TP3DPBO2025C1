#include <bits/stdc++.h>
#include "Pelanggan.cpp"
#include "Pengiriman.cpp"
#include "ManagerCustomer.cpp"
#pragma once

using namespace std;

int main() {
    Kurir kurir1("Andi", "08123456789", "K001", 3, "Ekspress", "Jakarta Selatan");

    Pengiriman pengiriman1("P001", "Terkirim", {kurir1}, 5.0, "Elektronik");

    Pelanggan pelanggan1("Budi", "08123456789", "C001", "Jl. Merdeka No. 5", {pengiriman1});

    ManagerCustomer manager_customer("Charlie", "085678901234", "M001", 5, 50, 4.5, 10, 90, "Meningkatkan respon tim", "95% pelanggan puas");

    Manager manager1("Dani", "085678901234", "M002", 7, 15, 85);

    CustomerService customer_service1("Eva", "085678901234", "CS001", 4, 30, 4.3);

    cout << string(40, '=') << endl;
    cout << "Data Pelanggan" << endl;
    cout << string(40, '=') << endl;
    cout << "Nama Pelanggan   : " << pelanggan1.getNama() << endl;
    cout << "Nomor HP         : " << pelanggan1.getnohp() << endl;
    cout << "Alamat           : " << pelanggan1.getalamat() << endl;
    cout << "ID Pelanggan     : " << pelanggan1.getidPelanggan() << endl;
    cout << "Daftar Pengiriman:" << endl;

    // Iterate over Pengiriman for this customer
    for (const auto& pengiriman : pelanggan1.getPengiriman()) {
        cout << "\n  ---- Detail Pengiriman ----" << endl;
        cout << "  ID Pengiriman    : " << pengiriman1.getIdPengiriman() << endl;
        cout << "  Status Pengiriman: " << pengiriman1.getStatusPengiriman() << endl;
        cout << "  Jenis Paket      : " << pengiriman1.getJenisPaket() << endl;
        cout << "  Berat Paket      : " << pengiriman1.getBeratPaket() << " kg" << endl;

        // Iterate over Kurir related to this delivery
        for (const auto& kurir : pengiriman1.getKurir()) {
            cout << "  ---- Kurir ----" << endl;
            cout << "  Nama Kurir       : " << kurir1.getNama() << endl;
            cout << "  Nomor HP Kurir   : " << kurir1.getnohp() << endl;
            cout << "  Jenis Kurir      : " << kurir1.getJenisKurir() << endl;
            cout << "  Wilayah          : " << kurir1.getWilayahPengantaran() << endl;
        }
    }

    // Display data for ManagerCustomer
    cout << "\n" << string(40, '=') << endl;
    cout << "Data ManagerCustomer" << endl;
    cout << string(40, '=') << endl;
    cout << "Nama               : " << manager_customer.CustomerService::getNama() << endl;
    cout << "Nomor HP           : " << manager_customer.CustomerService::getnohp() << endl;
    cout << "ID Pegawai         : " << manager_customer.Manager::getidPegawai() << endl;
    cout << "Lama Tahun Bekerja : " << manager_customer.Manager::getLamaTahunBekerja() << endl;
    cout << "Jumlah Keluhan     : " << manager_customer.getJumlahKeluhan() << endl;
    cout << "Rating Pelanggan   : " << manager_customer.getRatingPelanggan() << endl;
    cout << "Jumlah Anggota Tim : " << manager_customer.getJumlahAnggotaTim() << endl;
    cout << "Target Kinerja     : " << manager_customer.getTargetKinerja() << endl;
    cout << "Rencana Peningkatan Pelayanan : " << manager_customer.getRencanaPeningkatanPelayanan() << endl;
    cout << "Target Pelayanan   : " << manager_customer.getTargetPelayanan() << endl;

    // Display data for Manager
    cout << "\n" << string(40, '=') << endl;
    cout << "Data Manager" << endl;
    cout << string(40, '=') << endl;
    cout << "Nama               : " << manager1.getNama() << endl;
    cout << "Nomor HP           : " << manager1.getnohp() << endl;
    cout << "ID Pegawai         : " << manager1.getidPegawai() << endl;
    cout << "Lama Tahun Bekerja : " << manager1.getLamaTahunBekerja() << endl;
    cout << "Jumlah Anggota Tim : " << manager1.getJumlahAnggotaTim() << endl;
    cout << "Target Kinerja     : " << manager1.getTargetKinerja() << endl;

    // Display data for CustomerService
    cout << "\n" << string(40, '=') << endl;
    cout << "Data CustomerService" << endl;
    cout << string(40, '=') << endl;
    cout << "Nama               : " << customer_service1.getNama() << endl;
    cout << "Nomor HP           : " << customer_service1.getnohp() << endl;
    cout << "ID Pegawai         : " << customer_service1.getidPegawai() << endl;
    cout << "Lama Tahun Bekerja : " << customer_service1.getLamaTahunBekerja() << endl;
    cout << "Jumlah Keluhan     : " << customer_service1.getJumlahKeluhan() << endl;
    cout << "Rating Pelanggan   : " << customer_service1.getRatingPelanggan() << endl;

    return 0;
}
