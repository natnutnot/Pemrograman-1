while True:
    print("Pilih program:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    pilihan = int(input("Masukkan Pilihan: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Natalie Grace Katiandagho")
        break
    elif 1 <= pilihan <= 4:
        x = float(input("Masukkan nilai pertama: "))
        y = float(input("Masukkan nilai kedua: "))

        if pilihan == 1:
            hasil = x + y
            print(f"Hasil Penjumlahan antara {x:.2f} dengan {y:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:
            hasil = x - y
            print(f"Hasil Pengurangan antara {x:.2f} dengan {y:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:
            hasil = x * y
            print(f"Hasil Perkalian antara {x:.2f} dengan {y:.2f} adalah {hasil:.2f}")
        elif pilihan == 4:
            if y != 0:
                hasil = x / y
                print(f"Hasil Pembagian antara {x:.2f} dengan {y:.2f} adalah {hasil:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")