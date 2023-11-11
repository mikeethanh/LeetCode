def maxProduct(nums):
    # Find the two largest elements in the array
    max1 = max(nums)
    nums.remove(max1)
    max2 = max(nums)

    # Calculate the maximum product
    result = (max1 - 1) * (max2 - 1)
    return result

# Example usage
nums = [3, 4, 5, 2]
print(maxProduct(nums))
