t = int(input())
counts = []
for i in range(t):
    s = input()
    if len(s)<=10:
        counts.append(s)
    else:
        counts.append(s[0]+str((len(s)-2)) + s[-1])
for e in counts:
    print(e)