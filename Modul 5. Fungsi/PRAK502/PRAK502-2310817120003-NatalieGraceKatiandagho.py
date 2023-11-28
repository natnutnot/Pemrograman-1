def hitung(nilai1, nilai2):
    hitung_total = nilai1 - nilai2
    if hitung_total < 0:
        return hitung_total * -1
    else:
        return hitung_total  

def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

a, c, b, d = map(int, input().split())

hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))
