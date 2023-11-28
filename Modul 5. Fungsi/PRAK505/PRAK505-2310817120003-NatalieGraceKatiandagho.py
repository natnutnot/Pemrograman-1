def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    print(f"Perkenalkan Nama Saya: {nama}")
    
    usia = tahun_sekarang - tahunLahir
    print(f"Umur Saya: {usia} tahun")
    print(f"Saya Dari Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari: {asal}")

tahunLahir = int(input())
Namaku = input()
Asal = input()

Biodata(tahunLahir, Namaku, Asal)
