name_signs=["aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius","capricorn"]

signs=[21,20,21,21,22,22,23,22,24,24,23,23]
def decide_sign(month,day):
    if(day<signs[month]):
        return name_signs[month-1]
    else:
        return name_signs[month]

months=[31,28,31,30,31,30,31,31,30,31,30,31]

def function(date):
    month=int(date[0:2])
    day=int(date[2:4])
    year=int(date[4:8])
    if(year%4==0):
        months[1]=29
    else:
        months[1]=28
    if(day==months[month-1]):
        day=1
        month+=1

    con=months[month-1]-day
    while(con+months[month]<280):
        con+=months[month]
        month+=1
        if(month==12):
            month=0
            year+=1
    day=280-con
    strday=""
    strmonth=""
    if(day<10):
        strday="0"+str(day)
    else:
        strday=str(day)
    if(month+1<10):
        strmonth="0"+str(month+1)
    else:
        strmonth=str(month+1)
    return strmonth+"/"+strday+"/"+str(year)+" "+decide_sign(month,day)


n=int(input())
for i in range(n):
    p=str(input())
    print(i+1,function(p))
