public class Pegawai extends Manusia {
    private String idPegawai;
    private int lamaTahunBekerja;

    public Pegawai(String nama, String nohp, String idPegawai, int lamaTahunBekerja) {
        super(nama, nohp);
        this.idPegawai = idPegawai;
        this.lamaTahunBekerja = lamaTahunBekerja;
    }

    public String getIdPegawai() {
        return idPegawai;
    }

    public void setIdPegawai(String idPegawai) {
        this.idPegawai = idPegawai;
    }

    public int getLamaTahunBekerja() {
        return lamaTahunBekerja;
    }

    public void setLamaTahunBekerja(int lamaTahunBekerja) {
        this.lamaTahunBekerja = lamaTahunBekerja;
    }
}
