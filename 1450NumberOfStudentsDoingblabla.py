def busySutdent(startTime,endTime ,queryTime):
    n = len(endTime)
    count = 0
    for i in range(n):
        if endTime[i]-startTime[i] == queryTime :
            count +=1
    
    return count
startTime = [1,2,3]
endTime = [3,2,7]
queryTime = 4
print(busySutdent(startTime,endTime,queryTime))
