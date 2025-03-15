# TP3DPBO2025C1

## Janji
Saya Jihan Aqilah Hartono dengan NIM 2306827 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Desain Program
![tp3](https://github.com/user-attachments/assets/f5bbeccb-9741-4f42-9a1e-3c990bb12859)
1. Kelas Manusia:
Kelas Manusia adalah kelas dasar yang berfungsi untuk menyimpan informasi dasar yang dimiliki oleh objek Pelanggan dan Pegawai. Atribut yang dimiliki kelas ini antara lain Nama dan NoHP yang merupakan informasi pribadi dasar. Kelas ini menyediakan metode setter dan getter untuk mengakses dan memodifikasi data tersebut. Kelas ini akan menjadi kelas induk bagi dua kelas turunan, yaitu Pelanggan dan Pegawai.

2. Kelas Pelanggan:
Kelas Pelanggan adalah turunan dari kelas Manusia yang menyimpan informasi terkait dengan pelanggan. Atribut yang dimiliki oleh kelas ini salah satunya ialah Pengiriman yang merupakan daftar pengiriman yang telah dilakukan oleh pelanggan. Kelas ini memiliki metode untuk mengakses dan memodifikasi atribut-atribut tersebut. Kelas Pelanggan ini mengimplementasikan hubungan komposisi (has-a) dengan Pengiriman, di mana satu pelanggan dapat memiliki banyak pengiriman.

3. Kelas Pegawai:
Kelas Pegawai juga merupakan turunan dari kelas Manusia, namun kelas ini lebih spesifik mengelola data terkait dengan pegawai perusahaan. Atribut yang dimiliki kelas Pegawai antara lain IdPegawai untuk identifikasi pegawai, serta LamaTahunBekerja yang mencatat berapa lama pegawai tersebut bekerja di perusahaan. Kelas ini menjadi induk dari tiga kelas lainnya, yaitu Kurir, Manager, dan CustomerService.

4. Kelas Kurir:
Kelas Kurir adalah turunan dari kelas Pegawai yang menyimpan informasi lebih lanjut mengenai seorang kurir yang bekerja untuk perusahaan pengiriman. Kelas Kurir memiliki hubungan komposisi dengan Pengiriman. Dimana Pengiriman pasti memiliki kurir dan data data terkait

5. Kelas CustomerService:
Kelas CustomerService juga merupakan turunan dari Pegawai dan berfungsi untuk menyimpan data terkait pegawai yang bertugas di bagian layanan pelanggan. Atribut dalam kelas ini mencakup JumlahKeluhan yang menunjukkan jumlah keluhan pelanggan yang diterima oleh customer service per hari dan RatingPelanggan yang menunjukkan tingkat kepuasan pelanggan (skala 1 hingga 5). Kelas ini memiliki peran penting dalam mengelola dan merespons masalah yang dihadapi pelanggan.

6. Kelas Manager:
Kelas Manager adalah turunan dari Pegawai yang memiliki peran lebih tinggi dalam organisasi. Atribut yang dimiliki kelas ini antara lain JumlahAnggotaTim, yang menunjukkan banyaknya anggota tim yang dikelola oleh manajer, dan TargetKinerja, yang mengacu pada sasaran kinerja yang diharapkan tercapai oleh tim yang dipimpin. Kelas Manager bertanggung jawab untuk mengawasi dan memastikan kinerja pegawai lainnya dalam organisasi.

7. Kelas ManagerCustomer:
Kelas ManagerCustomer adalah kelas turunan yang menggunakan hybrid inheritance, yaitu mewarisi atribut dan metode dari kedua kelas Manager dan CustomerService. Kelas ini digunakan untuk menggambarkan seorang manajer yang memiliki peran ganda, baik sebagai manajer yang mengelola tim pegawai maupun sebagai pengelola layanan pelanggan. Atribut tambahan dalam kelas ini mencakup RencanaPeningkatanPelayanan, yang merujuk pada strategi atau rencana yang dimiliki untuk meningkatkan pelayanan pelanggan, serta TargetPelayanan, yang berfungsi untuk menetapkan target kepuasan pelanggan yang harus dicapai.

8. Kelas Pengiriman:
Kelas Pengiriman merupakan kelas yang menyimpan informasi terkait dengan pengiriman barang. Atribut yang dimiliki meliputi IdPengiriman, yang berfungsi sebagai identifikasi unik untuk setiap pengiriman, StatusPengiriman yang menunjukkan status terkini dari pengiriman tersebut (misalnya “Terkirim” atau “Dalam Proses”), BeratPaket yang mencatat berat paket yang dikirimkan, serta JenisPaket yang menggambarkan jenis barang yang dikirimkan. Kelas ini memiliki hubungan komposisi dengan Kurir, yang berarti Pengiriman pasti memiliki kurir dan data data terkait

## Alur Program
Struktur dasar menggunakan kelas Manusia yang berfungsi sebagai induk untuk dua entitas utama: Pelanggan dan Pegawai. Kelas Pelanggan bertugas untuk menyimpan data pelanggan dan mengelola berbagai pengiriman yang mereka lakukan. Relasi antara Pelanggan dan Pengiriman bersifat komposisi, di mana pelanggan dapat memiliki banyak pengiriman yang dilakukan oleh mereka. Hal ini memungkinkan pengelolaan data pelanggan yang lebih terstruktur dan memungkinkan sistem untuk melacak setiap pengiriman yang dilakukan oleh masing-masing pelanggan.

Di sisi lain, Pegawai adalah kelas dasar bagi Kurir, Manager, dan CustomerService. Masing-masing dari kelas-kelas ini mewakili jenis pekerjaan yang berbeda dalam organisasi. Kurir bertanggung jawab untuk mengantarkan barang, Manager untuk mengelola tim dan kinerja, serta CustomerService untuk menangani keluhan dan meningkatkan kepuasan pelanggan. Relasi antara Pegawai dan kelas-kelas turunannya ini memberikan fleksibilitas dalam mengelola berbagai jenis pegawai dalam organisasi, sehingga setiap jenis pegawai memiliki tanggung jawab yang jelas dan terpisah.

ManagerCustomer menggabungkan dua peran penting, yaitu Manager dan CustomerService, dengan tujuan untuk menangani aspek manajerial dan operasional layanan pelanggan secara bersamaan. Kelas ini mengintegrasikan tugas pengelolaan tim dan layanan pelanggan, menjadikannya entitas yang mampu memastikan bahwa layanan pelanggan tidak hanya efisien tetapi juga terus ditingkatkan. Relasi ini penting karena memberikan pengelolaan yang lebih holistik, yang memungkinkan organisasi untuk fokus pada pencapaian kinerja sekaligus memelihara hubungan yang baik dengan pelanggan.

Secara keseluruhan, alur program ini dirancang untuk menciptakan sistem yang efisien dan terstruktur di mana setiap entitas memiliki tanggung jawab yang jelas dan terhubung satu sama lain melalui relasi komposisi dan inheritance. Dengan menggunakan konsep-konsep ini, program dapat mengelola data pelanggan, pengiriman, pegawai, dan layanan pelanggan secara terintegrasi, memastikan setiap bagian dari organisasi berjalan dengan lancar dan efektif.

## Dokumentasi
### Python
![image](https://github.com/user-attachments/assets/f4b86af5-eb9b-47f2-a626-3906781af659)
![image](https://github.com/user-attachments/assets/71c7148d-fbb1-4ea7-91d1-5ec376095b86)


### CPP
![image](https://github.com/user-attachments/assets/69af75fd-8184-4098-9bd1-9b6d52b0f448)
![image](https://github.com/user-attachments/assets/e2be7178-35e3-41d2-a04b-4fe7adbf03a0)


### Java
![image](https://github.com/user-attachments/assets/5af10699-40e0-4faa-9a10-506ad09f14f2)
![image](https://github.com/user-attachments/assets/0f91e9d9-fa15-4737-84a0-ce9262d78a84)


