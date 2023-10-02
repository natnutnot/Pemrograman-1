a = 400000
b = 350000
disc_a = 13/100
disc_b = 21/100
harga_disc_a = int (a * disc_a)
harga_disc_b = int (b * disc_b)
harga_akhir_a = int (a - harga_disc_a)
harga_akhir_b = int (b - harga_disc_b)
print("Harga sepatu A adalah", a)
print("Harga sepatu B adalah", b)
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi", harga_akhir_a)
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi", harga_akhir_b)