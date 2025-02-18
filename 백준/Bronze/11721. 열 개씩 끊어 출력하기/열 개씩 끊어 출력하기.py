n = input()

for i in range(0,len(n)):
    if i != 0 and i % 10 == 0:
        print("\n"+n[i],end = '')
    else:
        print(n[i], end='')