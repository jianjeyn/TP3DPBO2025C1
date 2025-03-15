from Manager import Manager
from CustomerService import CustomerService

class ManagerCustomer(CustomerService, Manager):
    def __init__(self, nama="", nohp="", idPegawai="", LamaTahunBekerja=0, JumlahKeluhan=0, RatingPelanggan=0, 
                 JumlahAnggotaTim=0, TargetKinerja=0, rencanaPeningkatanPelayanan="", targetPelayanan=""):
        
        CustomerService.__init__(self, nama, nohp, idPegawai, LamaTahunBekerja, JumlahKeluhan, RatingPelanggan)
        Manager.__init__(self, nama, nohp, idPegawai, LamaTahunBekerja, JumlahAnggotaTim, TargetKinerja)

        self.__rencanaPeningkatanPelayanan = rencanaPeningkatanPelayanan
        self.__targetPelayanan = targetPelayanan

    def getRencanaPeningkatanPelayanan(self):
        return self.__rencanaPeningkatanPelayanan
    
    def setRencanaPeningkatanPelayanan(self, rencanaPeningkatanPelayanan):
        self.__rencanaPeningkatanPelayanan = rencanaPeningkatanPelayanan

    def getTargetPelayanan(self):
        return self.__targetPelayanan
    
    def setTargetPelayanan(self, targetPelayanan):
        self.__targetPelayanan = targetPelayanan
