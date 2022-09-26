n=int(input())
for i in range(n):
    a,b,c=map(int,input().split())
    s_l={}
    for j in range(b):
        d,e=map(int,input().split())
        s_l[d]=e
    players=[1]*a
    con=0
    for j in range(c):
        f=int(input())
        players[con]+=f
        if(players[con] in s_l):
            players[con]=s_l[players[con]]
        con+=1
        if(con==a):
            con=0
    for j in range(a):
        print("Position of player",j+1,"is",str(players[j])+".")