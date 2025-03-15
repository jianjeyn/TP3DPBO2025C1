from Manusia import Manusia

class Pegawai(Manusia):
    __idPegawai = ""
    __LamaTahunBekerja = 0

    def __init__(self, nama="", nohp="", idPegawai="", LamaTahunBekerja=0):
        super().__init__(nama, nohp)  # Memanggil constructor dari StokProduk
        self.__idPegawai = idPegawai
        self.__LamaTahunBekerja = LamaTahunBekerja

    # Getter dan Setter
    def getidPegawai(self):
        return self.__idPegawai
    
    def setidPegawai(self, idPegawai):
        self.__idPegawai = idPegawai

    def getLamaTahunBekerja(self):
        return self.__LamaTahunBekerja
    
    def setLamaTahunBekerja(self, LamaTahunBekerja):
        self.__LamaTahunBekerja = LamaTahunBekerja
