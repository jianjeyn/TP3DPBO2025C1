from Pelanggan import Pelanggan
from Pengiriman import Pengiriman
from Kurir import Kurir
from Manager import Manager
from ManagerCustomer import ManagerCustomer
from CustomerService import CustomerService

kurir1 = Kurir(nama="Andi", nohp="08123456789", idPegawai="K001", LamaTahunBekerja=3, 
               JenisKurir="Ekspress", WilayahPengantaran="Jakarta Selatan")

# Create an instance of Pengiriman (Delivery), associating it with a Kurir
pengiriman1 = Pengiriman(IdPengiriman="P001", StatusPengiriman="Terkirim", Kurir=[kurir1], BeratPaket=5, JenisPaket="Elektronik")

# Create an instance of Pelanggan (Customer), associating it with the Pengiriman
pelanggan1 = Pelanggan(nama="Budi", nohp="08123456789", idPelanggan="C001", alamat="Jl. Merdeka No. 5", Pengiriman=[pengiriman1])

# Create an instance of ManagerCustomer (Manager and CustomerService combined)
manager_customer = ManagerCustomer(
    nama="Charlie", nohp="085678901234", idPegawai="M001", LamaTahunBekerja=5,
    JumlahKeluhan=50, RatingPelanggan=4.5, JumlahAnggotaTim=10, TargetKinerja=90,
    rencanaPeningkatanPelayanan="Meningkatkan respon tim", targetPelayanan="95% pelanggan puas"
)

# Create an instance of Manager
manager1 = Manager(nama="Dani", nohp="085678901234", idPegawai="M002", LamaTahunBekerja=7, JumlahAnggotaTim=15, TargetKinerja=85)

# Create an instance of CustomerService
customer_service1 = CustomerService(nama="Eva", nohp="085678901234", idPegawai="CS001", LamaTahunBekerja=4, JumlahKeluhan=30, RatingPelanggan=4.3)

# Displaying the data for one customer, one delivery, and associated classes
print("=" * 40)
print("Data Pelanggan")
print("=" * 40)
print(f"Nama Pelanggan   : {pelanggan1.getNama()}")
print(f"Nomor HP         : {pelanggan1.getnohp()}")
print(f"Alamat           : {pelanggan1.getalamat()}")
print(f"ID Pelanggan     : {pelanggan1.getidPelanggan()}")
print("Daftar Pengiriman:")

# Check if Pengiriman is correctly set in Pelanggan
if pelanggan1.getPengiriman():
    for pengiriman in pelanggan1.getPengiriman():  # Iterate over Pengiriman for this customer
        print("\n  ---- Detail Pengiriman ----")
        print(f"  ID Pengiriman    : {pengiriman.getIdPengiriman()}")
        print(f"  Status Pengiriman: {pengiriman.getStatusPengiriman()}")
        print(f"  Jenis Paket      : {pengiriman.getJenisPaket()}")
        print(f"  Berat Paket      : {pengiriman.getBeratPaket()} kg")
        
        if pengiriman.getKurir():
            for kurir in pengiriman.getKurir():  # Iterate over Kurir related to this delivery
                print(f"  ---- Kurir ----")
                print(f"  Nama Kurir       : {kurir.getNama()}")
                print(f"  Nomor HP Kurir   : {kurir.getnohp()}")
                print(f"  Jenis Kurir      : {kurir.getJenisKurir()}")
                print(f"  Wilayah          : {kurir.getWilayahPengantaran()}")
else:
    print("Tidak ada pengiriman untuk pelanggan ini.")

print("\n" + "=" * 40)
print("Data ManagerCustomer")
print("=" * 40)
print(f"Nama               : {manager_customer.getNama()}")
print(f"Nomor HP           : {manager_customer.getnohp()}")
print(f"ID Pegawai         : {manager_customer.getidPegawai()}")
print(f"Lama Tahun Bekerja : {manager_customer.getLamaTahunBekerja()}")
print(f"Jumlah Keluhan     : {manager_customer.getJumlahKeluhan()}")
print(f"Rating Pelanggan   : {manager_customer.getRatingPelanggan()}")
print(f"Jumlah Anggota Tim : {manager_customer.getJumlahAnggotaTim()}")
print(f"Target Kinerja     : {manager_customer.getTargetKinerja()}")
print(f"Rencana Peningkatan Pelayanan : {manager_customer.getRencanaPeningkatanPelayanan()}")
print(f"Target Pelayanan   : {manager_customer.getTargetPelayanan()}")

print("\n" + "=" * 40)
print("Data Manager")
print("=" * 40)
print(f"Nama               : {manager1.getNama()}")
print(f"Nomor HP           : {manager1.getnohp()}")
print(f"ID Pegawai         : {manager1.getidPegawai()}")
print(f"Lama Tahun Bekerja : {manager1.getLamaTahunBekerja()}")
print(f"Jumlah Anggota Tim : {manager1.getJumlahAnggotaTim()}")
print(f"Target Kinerja     : {manager1.getTargetKinerja()}")

print("\n" + "=" * 40)
print("Data CustomerService")
print("=" * 40)
print(f"Nama               : {customer_service1.getNama()}")
print(f"Nomor HP           : {customer_service1.getnohp()}")
print(f"ID Pegawai         : {customer_service1.getidPegawai()}")
print(f"Lama Tahun Bekerja : {customer_service1.getLamaTahunBekerja()}")
print(f"Jumlah Keluhan     : {customer_service1.getJumlahKeluhan()}")
print(f"Rating Pelanggan   : {customer_service1.getRatingPelanggan()}")
