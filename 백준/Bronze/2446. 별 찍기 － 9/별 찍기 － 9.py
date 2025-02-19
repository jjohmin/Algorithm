n = int(input())
cnt = n*2-1
for i in range(n):
    for j in range(i):
        print(" ",end='')
    for j in range(cnt):
        print("*",end='')
    cnt-=2
    print("")
cnt=1
for i in range(n-1):
    cnt+=2
    for j in range(n-2-i):
        print(" ",end='')
    for j in range(cnt):
        print("*",end = '')
    print("")