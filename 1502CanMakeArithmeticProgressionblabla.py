def canMakeArithmeticProgression(arr):
    arr.sort()
    diff = arr[1] - arr[0]

    for i in range(2, len(arr)):
        if arr[i] - arr[i-1] != diff:
            return False

    return True

# Example usage
arr = [3, 5, 1]
print(canMakeArithmeticProgression(arr))

        
    
