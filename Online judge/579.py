p=str(input())
#1min=6grados

def grados_min(m):
    return m*6

def grados_hour(h,m):
    return h*30+m*1/2

while(p!="0:00"):
    h=""
    m=""
    if(len(p)==5):
        h=p[0:2]
        m=p[3:5]
    else:
        h=p[0]
        m=p[2:4]
    h=int(h)
    if(h==12):
        h=0
    m=int(m)

    g_min=grados_min(m)
    g_hour=grados_hour(h,m)
    difference=abs(g_min-g_hour)
    if(difference>180):
        if(g_min>g_hour):
            difference=(360-g_min)+g_hour
        else:
            difference=(360-g_hour)+g_min
    print("{0:.3f}".format(difference))
    p=str(input())