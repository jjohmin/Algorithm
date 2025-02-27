num = int(input())
for i in range(num):
    h, w, n = map(int, input().split())
    f = h if n%h==0 else n%h
    b = n//h if n%h==0 else n//h+1
    print(f'{f}{b:02d}')