n = int(input())
count = 0
while (n > 0):
    rem = n%10
    if rem == 4 or rem == 7:
        count += 1
    n //= 10
print("YES") if count==4 or count == 7 else print("NO")

