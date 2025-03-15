public class CustomerService extends Pegawai {
    private int jumlahKeluhan;
    private float ratingPelanggan;

    public CustomerService(String nama, String nohp, String idPegawai, int lamaTahunBekerja, int jumlahKeluhan, float ratingPelanggan) {
        super(nama, nohp, idPegawai, lamaTahunBekerja);
        this.jumlahKeluhan = jumlahKeluhan;
        this.ratingPelanggan = ratingPelanggan;
    }

    public int getJumlahKeluhan() {
        return jumlahKeluhan;
    }

    public void setJumlahKeluhan(int jumlahKeluhan) {
        this.jumlahKeluhan = jumlahKeluhan;
    }

    public float getRatingPelanggan() {
        return ratingPelanggan;
    }

    public void setRatingPelanggan(float ratingPelanggan) {
        this.ratingPelanggan = ratingPelanggan;
    }
}
