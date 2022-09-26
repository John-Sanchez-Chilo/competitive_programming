n=int(input())

def set_state(status,rule):
    if rule==(0,0,0):
        return status
    if status==(1,0,0):
        status=rule
    elif status[1]!=0:
        if(rule[1]!=0):
            if(rule[1]==status[1]):
                status=(status[1]*-1,0,0)
            else:
                status=(status[1],0,0)
    elif status[2]!=0:
        if(rule[2]!=0):
            if(rule[2]==status[2]):
                status=(status[2]*-1,0,0)
            else:
                status=(status[2],0,0)
    return status

def  convert(value):
    if value[0]==1:
        return "+x"
    elif value[0]==-1:
        return "-x"
    elif value[1]==1:
        return "+y"
    elif value[1]==-1:
        return "-y"
    elif value[2]==1:
        return "+z"
    elif value[2]==-1:
        return "-z"

while(n!=0):
    con=0
    p=[str(x) for x in input().split()]
    status=(1,0,0)
    for ele in p:
        value=(0,0,0)
        if(ele=="+y"):
            value=(0,1,0)
        elif(ele=="-y"):
            value=(0,-1,0)
        elif(ele=="+z"):
            value=(0,0,1)
        elif(ele=="-z"):
            value=(0,0,-1)
        else:
            value=(0,0,0)
        status=set_state(status,value)
    print(convert(status))
    n=int(input())

