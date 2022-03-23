from math import log

for u in range(int(input())):
    n = int(input())
    x = [int(w) for w in input().split()]
    
    d = {}
    for i in x:
        temp = int(log(i, 2))
        d[temp] = d.get(temp, 0) + 1
        
    ans = 0
    for i in d:
        z = d[i]
        ans += (z*(z-1))//2
        
    print(ans)