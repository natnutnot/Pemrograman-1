def max_bilangan(a, b, c, d):
    NilaiMaksimal = a
    if b > NilaiMaksimal:
        NilaiMaksimal = b
    if c > NilaiMaksimal:
        NilaiMaksimal = c
    if d > NilaiMaksimal:
        NilaiMaksimal = d
    return NilaiMaksimal

a, b, c, d = map(int, input().split())
hasil = max_bilangan(a, b, c, d)
print(hasil)
