n=int(input())
while n!=0:
    if(n==1):
        print("Sheet "+str(1)+", front: "+"Blank"+",",str(1))
    else:
        p=0
        mod=n%4
        if(mod==0):
            p=int(n/4)
            mod=4
        else:
            p=(n//4)+1
        con=0

        pages=list(range(1,n+1))+["Blank"]*(4-mod)
        last=n+(4-mod)-1
        first=0
        for i in range(p):
            print("Sheet "+str(i+1)+", front: "+str(pages[last])+",",str(pages[first]))
            last-=1;first+=1
            print("Sheet "+str(i+1)+", back : "+str(pages[first])+",",str(pages[last]))
            last-=1;first+=1

    n=int(input())