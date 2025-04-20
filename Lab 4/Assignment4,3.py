import re
sentence = str(input("Enter a sentence:\n"))
pattern = r"(?=.*a)(?=.*b)(?=.*c)(?=.*d)(?=.*e)(?=.*f)(?=.*g)(?=.*h)(?=.*i)(?=.*j)(?=.*k)(?=.*l)(?=.*m)(?=.*n)(?=.*o)(?=.*p)(?=.*q)(?=.*r)(?=.*s)(?=.*t)(?=.*u)(?=.*v)(?=.*w)(?=.*x)(?=.*y)(?=.*z)"
present = bool(re.search(pattern,sentence))
if present:
    print("Pangram")
else:
    print("Not Pangram")
