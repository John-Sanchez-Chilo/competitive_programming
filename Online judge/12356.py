m,n=map(int,input().split())
while(m!=0 and n!=0):
    live=[1]*m
    for i in range(n):
        l,r=map(int,input().split())
        for j in range(l-1,r):
            live[j]=0
        #print(live)
        sl=l-1
        sr=r-1
        while(sl>=0 and live[sl]==0):
            sl-=1
        while(sr<m and live[sr]==0):
            sr+=1
        rpta=""
        if(sl<0):
            rpta+="*"
        else:
            rpta+=str(sl+1)
        rpta+=" "
        if(sr>=m):
            rpta+="*"
        else:
            rpta+=str(sr+1)
        print(rpta)
    print("-")
    m,n=map(int,input().split())