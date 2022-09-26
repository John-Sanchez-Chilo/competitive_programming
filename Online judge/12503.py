n=int(input())
for i in range(n):
    m=int(input())
    con=0
    steps=[]
    for j in range(m):
        p=str(input())
        if(p=="LEFT"):
            con-=1
            steps.append(-1)
        elif(p=="RIGHT"):
            con+=1
            steps.append(1)
        else:
            r=int(p[8:])
            con+=steps[r-1]
            steps.append(steps[r-1])
    print(con)
