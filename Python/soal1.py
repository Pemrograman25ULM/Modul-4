n, s = input().split(" ")

for i in range(1, 51):
    if (i % int(n)) == 0:
        print(s, end=" ")
    else:
        print(i, end=" ")