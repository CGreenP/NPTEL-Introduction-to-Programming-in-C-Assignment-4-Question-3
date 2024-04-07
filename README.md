# NPTEL-Introduction-to-Programming-in-C-Assignment-4-Question-3
NPTEL Introduction to Programming in C Assignment 4 Question 3

# Question 3
You are given a sequence of lower case alphabetical characters as input, say A[0], ..., A[N-1]. N will be at most 100.

A prefix of the sequence is some initial segment of the string - that is, A[0], ..., A[K-1], for some integer K, 1 <= K <= N.

You have to output the longest prefix which occurs multiple times in the string.

If no prefix occurs again, you must output "NO". (without quotes)

For example, if the input string is "ababaa", then the possible prefixes are {"a", "ab", "aba", "abab", "ababa", "ababaa"}. We can see that "a" occurs at indices 2, 4, and 5. The string "ab" occurs again in position 2. "aba" occurs in position 2. "abab" does not occur again in the string. So the longest prefix that occurs multiple times in the string is "aba".

# Sample Input 1
```sh
abanpa
```

# Sample Output 1
```sh
a
```

# Sample Input 2
```sh
abcabcabc
```

# Sample Output 2
```sh
abcabc
```

# Sample Input 3
```sh
abaa
```

# Sample Output 3
```sh
a
```

# Sample Input 4
```sh
abz
```

# Sample Output 4
```sh
NO
```
