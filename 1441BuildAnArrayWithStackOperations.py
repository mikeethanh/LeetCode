def buildArray(target,n):
    arr = []
    for i in range(1,n+1):
        arr.append(i)
    SzOFTarget = len(target)
    count = 0
    for num in arr:
        if num in target:
            print("Push ")
            count += 1
            if(count == SzOFTarget): return 
        else :
            print("Push Pop")
    return

