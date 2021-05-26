import sys
N=int(input())
for i in range(1,N+1):
    a,b=map(int,sys.stdin.readline().split())
    print("Case #{}: {} + {} = {}".format(i,a,b,a+b))
