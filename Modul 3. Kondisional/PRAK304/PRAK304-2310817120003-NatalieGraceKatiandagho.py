x = int(input())

if x == 0:
    print('Nol')
elif x > 0 and x < 10:
    print('Satuan')
elif x >= 10 and x < 20:
    print('Belasan')
elif x >= 20 and x < 100:
    print('Puluhan')
else:
    print('Anda Menginput Melebihi Limit Bilangan')