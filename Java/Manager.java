public class Manager extends Pegawai {
    private int jumlahAnggotaTim;
    private int targetKinerja;

    public Manager(String nama, String nohp, String idPegawai, int lamaTahunBekerja, int jumlahAnggotaTim, int targetKinerja) {
        super(nama, nohp, idPegawai, lamaTahunBekerja);
        this.jumlahAnggotaTim = jumlahAnggotaTim;
        this.targetKinerja = targetKinerja;
    }

    public int getJumlahAnggotaTim() {
        return jumlahAnggotaTim;
    }

    public void setJumlahAnggotaTim(int jumlahAnggotaTim) {
        this.jumlahAnggotaTim = jumlahAnggotaTim;
    }

    public int getTargetKinerja() {
        return targetKinerja;
    }

    public void setTargetKinerja(int targetKinerja) {
        this.targetKinerja = targetKinerja;
    }
}
