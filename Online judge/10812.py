n=int(input())
for i in range(n):
    p,q=map(int,input().split())
    if(p<q):
        print("impossible")
    else:
        x=int((p+q)/2)
        print(x,x-q)