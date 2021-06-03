import sys
a=[]
for i in range(0,10):
    a.append(int(sys.stdin.readline().rstrip()))
a=[ x%42 for x in a ]
a=set(a)
print(len(a))
