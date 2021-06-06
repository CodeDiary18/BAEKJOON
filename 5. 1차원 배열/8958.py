import sys
n=int(input())
for i in range(0,n):
    result=0
    score=0
    r=sys.stdin.readline().rstrip()
    for j in r:
        if j=="O":
            score+=1
        else:
            score=0
        result+=score
    print(result)
