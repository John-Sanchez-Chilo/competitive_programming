m,n=map(int,input().split())
while(m!=0 or n!=0):
    array=[0]*m
    for i in range(m):
        p=int(input())
        array[p-1]+=1
    for i in range(n):
        p=int(input())
        if(p<=m):
            array[p-1]+=1
    con=0
    for i in array:
        if(i!=2):
            con+=1
    print(m-con)

    m,n=map(int,input().split())