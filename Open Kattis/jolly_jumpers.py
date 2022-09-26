def jolly(array):
    n=len(array)
    if(n<3):
        return True
    values=[0]*(n-2)
    for i in range(2, len(array)):
        difference=abs(array[i]-array[i-1])
        if(difference!=0 and difference<n-1 and values[difference-1]==0):
            values[difference-1]=1
        else:
            return False
    return True


while(True):
    try:
        n=[int(x) for x in input().split()]
        if(jolly(n)):
            print("Jolly")
        else:
            print("Not Jolly")

    except EOFError:
        break