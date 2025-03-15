public class Kurir extends Pegawai {
    private String jenisKurir;
    private String wilayahPengantaran;

    public Kurir(String nama, String nohp, String idPegawai, int lamaTahunBekerja, String jenisKurir, String wilayahPengantaran) {
        super(nama, nohp, idPegawai, lamaTahunBekerja);
        this.jenisKurir = jenisKurir;
        this.wilayahPengantaran = wilayahPengantaran;
    }

    public String getJenisKurir() {
        return jenisKurir;
    }

    public void setJenisKurir(String jenisKurir) {
        this.jenisKurir = jenisKurir;
    }

    public String getWilayahPengantaran() {
        return wilayahPengantaran;
    }

    public void setWilayahPengantaran(String wilayahPengantaran) {
        this.wilayahPengantaran = wilayahPengantaran;
    }
}
