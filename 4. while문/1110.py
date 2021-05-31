n=int(input())
cycle=0
num=n
while True:
    cycle+=1
    first_add=num//10+num%10
    second_add=num%10*10+first_add%10
    num=second_add
    if n==num:
        break
print(cycle)
