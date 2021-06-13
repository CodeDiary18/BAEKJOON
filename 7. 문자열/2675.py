import sys
t=int(input())
for i in range(0,t):
    num,s=sys.stdin.readline().split()
    num=int(num)
    result=''
    for j in s:
        result+=j*num
    print(result)
