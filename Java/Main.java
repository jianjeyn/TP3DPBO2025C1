import java.util.List;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Kurir kurir1 = new Kurir("Andi", "08123456789", "K001", 3, "Ekspress", "Jakarta Selatan");

        Pengiriman pengiriman1 = new Pengiriman("P001", "Terkirim", List.of(kurir1), 5, "Elektronik");

        Pelanggan pelanggan1 = new Pelanggan("Budi", "08123456789", "C001", "Jl. Merdeka No. 5", List.of(pengiriman1));

        ManagerCustomer managerCustomer = new ManagerCustomer(
            "Charlie", "085678901234", "M001", 5, 50, 85, 
            "Meningkatkan respon tim", "95% pelanggan puas", 
            50, 4.5f
        );

        Manager manager1 = new Manager("Dani", "085678901234", "M002", 7, 15, 85);

        CustomerService customerService1 = new CustomerService("Eva", "085678901234", "CS001", 4, 30, 4.3f);

        System.out.println("=".repeat(40));
        System.out.println("Data Pelanggan");
        System.out.println("=".repeat(40));
        System.out.println("Nama Pelanggan   : " + pelanggan1.getNama());
        System.out.println("Nomor HP         : " + pelanggan1.getNoHP());
        System.out.println("Alamat           : " + pelanggan1.getAlamat());
        System.out.println("ID Pelanggan     : " + pelanggan1.getIdPelanggan());
        System.out.println("Daftar Pengiriman:");

        if (!pelanggan1.getPengiriman().isEmpty()) {
            for (Pengiriman pengiriman : pelanggan1.getPengiriman()) {
                System.out.println("  ---- Detail Pengiriman ----");
                System.out.println("  ID Pengiriman    : " + pengiriman.getIdPengiriman());
                System.out.println("  Status Pengiriman: " + pengiriman.getStatusPengiriman());
                System.out.println("  Jenis Paket      : " + pengiriman.getJenisPaket());
                System.out.println("  Berat Paket      : " + pengiriman.getBeratPaket() + " kg");

                if (!pengiriman.getKurir().isEmpty()) {
                    for (Kurir kurir : pengiriman.getKurir()) {
                        System.out.println("  ---- Kurir ----");
                        System.out.println("  Nama Kurir       : " + kurir.getNama());
                        System.out.println("  Nomor HP Kurir   : " + kurir.getNoHP());
                        System.out.println("  Jenis Kurir      : " + kurir.getJenisKurir());
                        System.out.println("  Wilayah          : " + kurir.getWilayahPengantaran());
                    }
                }
            }
        } else {
            System.out.println("Tidak ada pengiriman untuk pelanggan ini.");
        }

        System.out.println("\n".repeat(1) + "=".repeat(40));
        System.out.println("Data ManagerCustomer");
        System.out.println("=".repeat(40));
        System.out.println("Nama               : " + managerCustomer.getNama());
        System.out.println("Nomor HP           : " + managerCustomer.getNoHP());
        System.out.println("ID Pegawai         : " + managerCustomer.getIdPegawai());
        System.out.println("Lama Tahun Bekerja : " + managerCustomer.getLamaTahunBekerja());
        System.out.println("Jumlah Anggota Tim : " + managerCustomer.getJumlahAnggotaTim());
        System.out.println("Target Kinerja     : " + managerCustomer.getTargetKinerja());
        System.out.println("Rencana Peningkatan Pelayanan : " + managerCustomer.getRencanaPeningkatanPelayanan());
        System.out.println("Target Pelayanan   : " + managerCustomer.getTargetPelayanan());

        System.out.println("\n".repeat(1) + "=".repeat(40));
        System.out.println("Data Manager");
        System.out.println("=".repeat(40));
        System.out.println("Nama               : " + manager1.getNama());
        System.out.println("Nomor HP           : " + manager1.getNoHP());
        System.out.println("ID Pegawai         : " + manager1.getIdPegawai());
        System.out.println("Lama Tahun Bekerja : " + manager1.getLamaTahunBekerja());
        System.out.println("Jumlah Anggota Tim : " + manager1.getJumlahAnggotaTim());
        System.out.println("Target Kinerja     : " + manager1.getTargetKinerja());

        System.out.println("\n".repeat(1) + "=".repeat(40));
        System.out.println("Data CustomerService");
        System.out.println("=".repeat(40));
        System.out.println("Nama               : " + customerService1.getNama());
        System.out.println("Nomor HP           : " + customerService1.getNoHP());
        System.out.println("ID Pegawai         : " + customerService1.getIdPegawai());
        System.out.println("Lama Tahun Bekerja : " + customerService1.getLamaTahunBekerja());
        System.out.println("Jumlah Keluhan     : " + customerService1.getJumlahKeluhan());
        System.out.println("Rating Pelanggan   : " + customerService1.getRatingPelanggan());
    }
}
