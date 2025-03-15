import java.util.List;
import java.util.ArrayList;

public class Pelanggan extends Manusia {
    private String idPelanggan;
    private String alamat;
    private List<Pengiriman> pengirimanList;

    public Pelanggan(String nama, String nohp, String idPelanggan, String alamat, List<Pengiriman> pengirimanList) {
        super(nama, nohp);
        this.idPelanggan = idPelanggan;
        this.alamat = alamat;
        this.pengirimanList = pengirimanList != null ? pengirimanList : new ArrayList<>();
    }

    public String getIdPelanggan() {
        return idPelanggan;
    }

    public void setIdPelanggan(String idPelanggan) {
        this.idPelanggan = idPelanggan;
    }

    public String getAlamat() {
        return alamat;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public List<Pengiriman> getPengiriman() {
        return pengirimanList;
    }

    public void setPengiriman(List<Pengiriman> pengirimanList) {
        this.pengirimanList = pengirimanList;
    }
}
