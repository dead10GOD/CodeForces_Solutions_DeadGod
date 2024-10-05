import sys
input = sys.stdin.readline
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))
t = int(input())
for i in range(t):
    n = int(input())
    if n & n-1 == 0:
        print("NO")
    else:
        print("YES")
        
    