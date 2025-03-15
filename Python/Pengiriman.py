class Pengiriman:
    __IdPengiriman = ""
    __StatusPengiriman = ""
    __Kurir = []
    __BeratPaket = 0
    __JenisPaket = ""

    def __init__(self, IdPengiriman="", StatusPengiriman="", Kurir=None, BeratPaket=0, JenisPaket=""):
        self.__IdPengiriman = IdPengiriman
        self.__StatusPengiriman = StatusPengiriman
        self.__Kurir = Kurir if Kurir is not None else []
        self.__BeratPaket = BeratPaket
        self.__JenisPaket = JenisPaket
    
    def getIdPengiriman(self):
        return self.__IdPengiriman
    
    def setIdPengiriman(self, IdPengiriman):
        self.__IdPengiriman = IdPengiriman
    
    def getStatusPengiriman(self):
        return self.__StatusPengiriman
    
    def setStatusPengiriman(self, StatusPengiriman):
        self.__StatusPengiriman = StatusPengiriman

    def getKurir(self):
        return self.__Kurir
    
    def setKurir(self, Kurir):
        self.__Kurir = Kurir

    def getBeratPaket(self):
        return self.__BeratPaket
    
    def setBeratPaket(self, BeratPaket):
        self.__BeratPaket = BeratPaket

    def getJenisPaket(self):
        return self.__JenisPaket
    
    def setJenisPaket(self, JenisPaket):
        self.__JenisPaket = JenisPaket
