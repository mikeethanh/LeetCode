def restoreString(s, indices):
    n = len(s)
    result = [''] * n

    for i in range(n):
        result[indices[i]] = s[i]

    return ''.join(result)

# Example usage
s = "codeleet"
indices = [4, 5, 6, 7, 0, 2, 1, 3]
print(restoreString(s, indices))
