S = input()
SET = set()
for i in range(len(S)):
    for j in range(i+1, len(S) + 1):
        SET.add(S[i:j])

print(len(SET))
