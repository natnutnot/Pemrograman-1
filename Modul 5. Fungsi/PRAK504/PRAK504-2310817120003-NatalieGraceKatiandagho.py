def reverse(angka):
    reversed_angka = 0
    while angka != 0:
        digit = angka % 10
        reversed_angka = reversed_angka * 10 + digit
        angka //= 10
    return reversed_angka

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))
