def decode(s):
    def helper(s, memo):
        if s in memo:
            return memo[s]
        if not s:
            return [""]
        res = []
        if s[0] != "0":
            res += [chr(96 + int(s[:1])) + item for item in helper(s[1:], memo)]
        if len(s) >= 2 and "10" <= s[:2] <= "26":
            res += [chr(96 + int(s[:2])) + item for item in helper(s[2:], memo)]
        memo[s] = res
        return res
    
    return helper(s, {})

encoded_message = str(input("Enter your code: "))
decoded_messages = decode(encoded_message)
print(decoded_messages)
