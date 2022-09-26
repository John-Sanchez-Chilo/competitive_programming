uno="BFPV"
dos="CGJKQSXZ"
tres="DT"
cuatro="L"
cinco="MN"
seis="R"

def belong(letter):
    if(letter in uno):
        return "1"
    elif(letter in dos):
        return "2"
    elif(letter in tres):
        return "3"
    elif(letter in cuatro):
        return "4"
    elif(letter in cinco):
        return "5"
    elif(letter in seis):
        return "6"
    else:
        return ""

while(True):
    try:
        word=str(input())
        rpta=belong(word[0])
        past=rpta
        for i in range(1,len(word)):
            new=belong(word[i])
            if(new!=past):
                rpta+=new
                past=new
        print(rpta)
    except EOFError:
        break