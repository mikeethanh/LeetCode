def countOdds(low, high):
    start = low
    end = high
    res = 0 
    while(start <= end) :
        if(start % 2 != 0) :
            res +=1 
            start += 1
        else :
            start += 1
    
    return res 

print(countOdds(3, 7))
    
    
