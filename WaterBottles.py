def numWaterBottles(numBottles, numExchange):
    res = numBottles
    ExcessBottles = 0
    BottlesAfterDivide = numBottles

    while BottlesAfterDivide >= numExchange:
        ExcessBottles = BottlesAfterDivide % numExchange
        BottlesAfterDivide = BottlesAfterDivide // numExchange
        res += BottlesAfterDivide
        BottlesAfterDivide += ExcessBottles

    return res

print(numWaterBottles(15, 4))

        

