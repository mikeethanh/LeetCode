def xorOperation(n, start):
    result = start

    for i in range(1, n):
        # Calculate the XOR of the current element with the previous result
        result ^= (start + 2 * i)

    return result

# Example usage
n = 5
start = 0
print(xorOperation(n, start))
