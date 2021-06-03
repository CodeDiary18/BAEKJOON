a=int(input())
b=int(input())
c=int(input())
comb=str(a*b*c)
for i in range(0,10):
    print(comb.count('{}'.format(i)))
