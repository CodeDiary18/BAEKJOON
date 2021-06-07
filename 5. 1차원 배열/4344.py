import sys
n=int(input())
for i in range(0,n):
    L=list(map(int,sys.stdin.readline().split()))
    average=sum(L[1:])/L[0]
    cnt=len([x for x in L[1:] if x>average])
    print("{}%".format("%.3f"%round(cnt/L[0]*100,3)))
