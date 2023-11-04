detik = int(input())

hari = int(detik / (24 * 3600))
jam = int((detik % (24 * 3600)) / 3600)
menit = int((detik % 3600) / 60)
detik2 = int(detik % 60)

if detik >= 0 and detik < 61 :
    print(f'00:00:{detik}')
elif detik >= 60 and detik < 3600 :
    print(f'00:{menit:02d}:{detik2:02d}')
elif detik >= 3600 and detik < 86400:
    print(f'{jam:02d}:{menit:02d}:{detik2:02d}')
else:
    print(f'{hari}hari {jam:02d}:{menit:02d}:{detik2:02d}')
 