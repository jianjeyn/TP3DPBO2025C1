from Pegawai import Pegawai

class CustomerService(Pegawai):
    __JumlahKeluhan = 0
    __RatingPelanggan = 0

    def __init__(self, nama="", nohp="", idPegawai="", LamaTahunBekerja=0, JumlahKeluhan=0, RatingPelanggan=0):
        super().__init__(nama, nohp, idPegawai, LamaTahunBekerja)  # Memanggil constructor dari StokProduk
        self.__JumlahKeluhan = JumlahKeluhan
        self.__RatingPelanggan = RatingPelanggan

    # Getter dan Setter
    def getJumlahKeluhan(self):
        return self.__JumlahKeluhan
    
    def setJumlahKeluhan(self, JumlahKeluhan):
        self.__JumlahKeluhan = JumlahKeluhan

    def getRatingPelanggan(self):
        return self.__RatingPelanggan 
    
    def setRatingPelanggan(self, RatingPelanggan):
        self.__RatingPelanggan = RatingPelanggan
