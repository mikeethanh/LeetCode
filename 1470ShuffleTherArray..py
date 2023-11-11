def shuffle(nums, n):
    nums1 = nums[:n]
    nums2 = nums[n:]
    res = []

    for i in range(n):
        res.append(nums1[i])
        res.append(nums2[i])

    return res

nums = [2, 5, 1, 3, 4, 7]
n = 3
print(shuffle(nums, n))
