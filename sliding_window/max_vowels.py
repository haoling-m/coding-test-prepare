def maxVowels(s: str, k: int) -> int:
    vowels = set('aeiou')
    max_vowels = 0
    current_vowels = 0

    for i in range(len(s)):
        if s[i] in vowels:
            current_vowels += 1
        
        if i < k -1:
            continue
        max_vowels = max(max_vowels, current_vowels)
        if s[i - (k-1)] in vowels:
            current_vowels -= 1
        
    return max_vowels

#test cases
print(maxVowels("abciiidef", 3)) #3