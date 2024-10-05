lst = []
# m = int(input())
# n = int(input())
# m,n=raw_input().split(" ")
# m=int(m)
# n=int(m)
n,m = input().split(" ")
m = int(m)
n = int(n)
# for i in range(0, n):
# 	ele = int(input())
# 	lst.append(ele)
lst = list(map(int,input().split()))
lst.sort()
sum = 0
for i in lst:
    if m > 0 and i < 0:
        m -= 1
        sum -= i
    else:
        break
print(sum)
