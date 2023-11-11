def maxPower(s):
    max_count = 1
    current_count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            current_count += 1
        else:
            current_count = 1

        max_count = max(max_count, current_count)

    return max_count

# Example usage
s = "leetcode"
print(maxPower(s))
