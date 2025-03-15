from Manusia import Manusia

class Pelanggan(Manusia):
    __idPelanggan = ""
    __alamat = ""
    __Pengiriman = []

    def __init__(self, nama="", nohp="", idPelanggan="", alamat="", Pengiriman=None):
        super().__init__(nama, nohp)  # Memanggil constructor dari StokProduk
        self.__idPelanggan = idPelanggan
        self.__alamat = alamat
        self.__Pengiriman = Pengiriman if Pengiriman is not None else []

    # Getter dan Setter
    def getidPelanggan(self):
        return self.__idPelanggan
    
    def setidPelanggan(self, idPelanggan):
        self.__idPelanggan = idPelanggan

    def getalamat(self):
        return self.__alamat
    
    def setalamat(self, alamat):
        self.__alamat = alamat

    def getPengiriman(self):
        return self.__Pengiriman
    
    def setPengiriman(self, Pengiriman):     
        self.__Pengiriman = Pengiriman
