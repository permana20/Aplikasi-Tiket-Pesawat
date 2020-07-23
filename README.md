OVERVIEW

Disini kami membuat aplikasi pembayaran kos kosan,tujuan aplikasinya supaya mempermudah pembayaran dan detail kosnya jika terjadi masalah sewaktu waktu.keamanan yang kami gunakan adalah mengenkripsikan password dan nomor debit kartu pembayaran user tersebut.kunci untuk enkripsi adalah 3 yang ditambahkan ke nilai ASCII.

Disini kami menggunakan algoritma cesar chiper dan kunci untuk enkripsi adalah 3 yang ditambahkan ke nilai ASCII Inti dari algoritma kriptografi ini adalah melakukan pergeseran terhadap semua karakter pada plainteks dengan nilai pergeseran yang sama.

SISTEM KERJA

A. mengenkripsi password dan nomor debit si user Proses enkripsi dapat menggunakan operator aritmetik modulo setelah sebelumnya  setiap huruf transformasi kedalam angka, yaitu: A = 0, B = 1,…, Z = 25.  Proses enkripsi suatu huruf x dengan dengan pergeseran n dapat dinyatakan secara matematis

B.dengan mengisi kunci public_key dan menambahkan nilai ascii misalkan 3 untuk public_key Misalnya diketahui bahwa pergeseran = 3, maka huruf A akan digantikan oleh huruf D, huruf B menjadi huruf E, dan seterusnya. setelah si user bisa masuk ke aplikasi tersebut nomornya sudah terenkripsi kecuali nama user tidak terenkripsi
