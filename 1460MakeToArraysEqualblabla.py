def isPrefixOfWord(sentence, searchWord):
    words = sentence.split()

    for i, word in enumerate(words, 1):
        if word.startswith(searchWord):
            return i

    return -1

# Example usage
sentence = "i love eating burger"
searchWord = "burg"
print(isPrefixOfWord(sentence, searchWord))

# Tiền tố" và "hậu tố" là thuật ngữ thường được sử dụng trong ngôn ngữ học và lập trình để mô tả các phần của một chuỗi.

# Tiền Tố (Prefix):

# Trong chuỗi, "tiền tố" là một chuỗi con mà xuất hiện ở đầu chuỗi gốc.
# Ví dụ: Trong chuỗi "Hello", "Hel" là một tiền tố.
# Hậu Tố (Suffix):

# "Hậu tố" là một chuỗi con mà xuất hiện ở cuối chuỗi gốc.
# Ví dụ: Trong chuỗi "World", "rld" là một hậu tố.
