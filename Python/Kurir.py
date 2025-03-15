from Pegawai import Pegawai

class Kurir(Pegawai):
    __JenisKurir = ""
    __WilayahPengantaran = ""

    def __init__(self, nama="", nohp="", idPegawai="", LamaTahunBekerja=0, JenisKurir="", WilayahPengantaran=""):
        super().__init__(nama, nohp, idPegawai, LamaTahunBekerja)  # Memanggil constructor dari StokProduk
        self.__JenisKurir = JenisKurir
        self.__WilayahPengantaran = WilayahPengantaran

    # Getter dan Setter
    def getJenisKurir(self):
        return self.__JenisKurir
    
    def setJenisKurir(self, JenisKurir):
        self.__JenisKurir = JenisKurir

    def getWilayahPengantaran(self):
        return self.__WilayahPengantaran 
    
    def setWilayahPengantaran(self, WilayahPengantaran):
        self.__WilayahPengantaran = WilayahPengantaran
