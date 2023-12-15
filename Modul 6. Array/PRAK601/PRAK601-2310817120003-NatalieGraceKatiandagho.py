baris, kolom = map(int, input().split()) 
matrix = [int(x) for x in input().split()]

for i in range(baris):
    for j in range(kolom):
        print(matrix[i*kolom + j], end=" ")
    print()