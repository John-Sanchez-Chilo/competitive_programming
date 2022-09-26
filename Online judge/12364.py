uno="*....."
dos="*.*..."
braile_numbers=[".***..","*.....","*.*..."]
def to_braile():
    text=str(input())
    for i in range(3):
        for j in range(len(text)):
            print(text[j],end='')
        print()


def to_numbers():
    p=str(input())
    lista=[]
    con=0
    while(con+2<len(p)):
        lista.append(p[con:con+2])
    for i in range(2):
        p=str(input())
        j=0
        while(con+2<len(p)):
            lista[j]+=p[con:con+2]
            j+=1


n=int(input())
while(n!=0):
    type=str(input())
    if(type=="S"):
        to_braile()
    else:
        to_numbers()
