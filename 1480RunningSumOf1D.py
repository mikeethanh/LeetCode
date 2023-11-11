def runningSum(arr):
    res = [arr[0]]
    sum = arr[0]
    for i in range(1,len(arr)):
        sum += arr[i]
        res.append(sum)
    return res

arr =[1,2,3,4]
print(runningSum(arr))