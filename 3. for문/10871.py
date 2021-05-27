N, X=map(int,input().split())
A=list(map(int,input().split()))
result=[x for x in A if x < X]
print(" ".join(map(str,result)))
