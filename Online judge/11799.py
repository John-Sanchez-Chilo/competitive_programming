n=int(input())
for i in range(n):
    m=max([int(x) for x in input().split()])
    print("Case ",i+1,": ",m)