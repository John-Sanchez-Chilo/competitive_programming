def function(n,b,h,w):
    max=100000
    rpta=max
    for i in  range(h):
        p=int(input())
        passed=True
        q=[int(x) for x in input().split()]
        for e in q:
            if(e<n):
                passed=False
        cost=n*p
        if(passed and cost<b and cost<rpta):
            rpta=cost
    if(rpta==max):
        return "stay home"
    return rpta
    
while(True):
    try:
        n,b,h,w=map(int,input().split())
        print(function(n,b,h,w))
    except EOFError:
        break
