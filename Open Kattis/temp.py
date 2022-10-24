n=int(input())
for i in range(n):
    m=0
    urls=[]
    for j in range(10):
        p,q=map(str,input().split())
        q=int(q)
        if(q>m):
            m=q
            urls.clear()
            urls.append(p)
        elif(q==m):
            urls.append(p)
    print("Case #",i+1,":")
    for url in urls:
        print(url)