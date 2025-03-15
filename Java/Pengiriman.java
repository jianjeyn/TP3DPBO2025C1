import java.util.List;

public class Pengiriman {
    private String idPengiriman;
    private String statusPengiriman;
    private List<Kurir> kurirList;
    private int beratPaket;
    private String jenisPaket;

    public Pengiriman(String idPengiriman, String statusPengiriman, List<Kurir> kurirList, int beratPaket, String jenisPaket) {
        this.idPengiriman = idPengiriman;
        this.statusPengiriman = statusPengiriman;
        this.kurirList = kurirList;
        this.beratPaket = beratPaket;
        this.jenisPaket = jenisPaket;
    }

    public String getIdPengiriman() {
        return idPengiriman;
    }

    public void setIdPengiriman(String idPengiriman) {
        this.idPengiriman = idPengiriman;
    }

    public String getStatusPengiriman() {
        return statusPengiriman;
    }

    public void setStatusPengiriman(String statusPengiriman) {
        this.statusPengiriman = statusPengiriman;
    }

    public List<Kurir> getKurir() {
        return kurirList;
    }

    public void setKurir(List<Kurir> kurirList) {
        this.kurirList = kurirList;
    }

    public int getBeratPaket() {
        return beratPaket;
    }

    public void setBeratPaket(int beratPaket) {
        this.beratPaket = beratPaket;
    }

    public String getJenisPaket() {
        return jenisPaket;
    }

    public void setJenisPaket(String jenisPaket) {
        this.jenisPaket = jenisPaket;
    }
}
