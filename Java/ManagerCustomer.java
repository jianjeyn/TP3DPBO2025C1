public class ManagerCustomer extends Manager {
    private String rencanaPeningkatanPelayanan;
    private String targetPelayanan;
    private int jumlahKeluhan;  // Menambahkan atribut
    private float ratingPelanggan;  // Menambahkan atribut

    public ManagerCustomer(String nama, String nohp, String idPegawai, int lamaTahunBekerja, int jumlahAnggotaTim, int targetKinerja, 
                           String rencanaPeningkatanPelayanan, String targetPelayanan, int jumlahKeluhan, float ratingPelanggan) {
        super(nama, nohp, idPegawai, lamaTahunBekerja, jumlahAnggotaTim, targetKinerja);
        this.rencanaPeningkatanPelayanan = rencanaPeningkatanPelayanan;
        this.targetPelayanan = targetPelayanan;
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

    public String getRencanaPeningkatanPelayanan() {
        return rencanaPeningkatanPelayanan;
    }

    public void setRencanaPeningkatanPelayanan(String rencanaPeningkatanPelayanan) {
        this.rencanaPeningkatanPelayanan = rencanaPeningkatanPelayanan;
    }

    public String getTargetPelayanan() {
        return targetPelayanan;
    }

    public void setTargetPelayanan(String targetPelayanan) {
        this.targetPelayanan = targetPelayanan;
    }
}
