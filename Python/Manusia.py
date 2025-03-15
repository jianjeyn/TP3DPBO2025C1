class Manusia:
    __nama = ""
    __nohp = ""

    def __init__(self, nama="", nohp=""):
        self.__nama = nama
        self.__nohp = nohp
    
    def getNama(self):
        return self.__nama
    
    def setNama(self, nama):
        self.__nama = nama
    
    def getnohp(self):
        return self.__nohp
    
    def setnohp(self, nohp):
        self.__nohp = nohp
