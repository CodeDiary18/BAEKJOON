import sys
a=[]
for i in range(0,9):
    a.append(int(sys.stdin.readline().rstrip()))
print(max(a))
print(a.index(max(a))+1)
