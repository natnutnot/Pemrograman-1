kode = input()
pesan = input()

panjang_kode = len(kode)
panjang_pesan = len(pesan)

if panjang_kode != panjang_pesan:
    print("Panjang kalimat berbeda, pesan palsu")
    exit()

bintang = 0
pagar = 0

hasil_pesan = ""

for i in range(panjang_kode):
    if kode[i] == ' ' and pesan[i] == ' ':
        hasil_pesan += ' '
    elif kode[i] == pesan[i]:
        hasil_pesan += '*'
        bintang += 1
    else:
        hasil_pesan += '#'
        pagar += 1

print(hasil_pesan)
print(f"* = {bintang}")
print(f"# = {pagar}")

if bintang >= pagar:
    print("Pesan asli")
else:
    print("Pesan palsu")
