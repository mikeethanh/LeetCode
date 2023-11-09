def numIdenticalPairs(nums):
    count = 0
    occurrences = {}

    for num in nums:
        if num in occurrences:
            count += occurrences[num]
            occurrences[num] += 1
        else:
            occurrences[num] = 1

    return count

# Example usage
nums = [1, 2, 3, 1, 1, 3]
print(numIdenticalPairs(nums))