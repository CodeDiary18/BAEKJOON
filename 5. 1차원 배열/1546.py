n=int(input())
score=list(map(int,input().split()))
s_max=max(score)
score_jojak=[x/s_max*100 for x in score]
print(sum(score_jojak)/n)
