from Pegawai import Pegawai

class Manager(Pegawai):
    __JumlahAnggotaTim = 0
    __TargetKinerja = 0

    def __init__(self, nama="", nohp="", idPegawai="", LamaTahunBekerja=0, JumlahAnggotaTim=0, TargetKinerja=0):
        super().__init__(nama, nohp, idPegawai, LamaTahunBekerja)  # Memanggil constructor dari StokProduk
        self.__JumlahAnggotaTim = JumlahAnggotaTim
        self.__TargetKinerja = TargetKinerja

    # Getter dan Setter
    def getJumlahAnggotaTim(self):
        return self.__JumlahAnggotaTim
    
    def setJumlahAnggotaTim(self, JumlahAnggotaTim):
        self.__JumlahAnggotaTim = JumlahAnggotaTim

    def getTargetKinerja(self):
        return self.__TargetKinerja 
    
    def setTargetKinerja(self, TargetKinerja):
        self.__TargetKinerja = TargetKinerja
