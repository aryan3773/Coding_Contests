from math import log

for u in range(int(input())):
    n = int(input())
    
    if(n == 2):
        print(0)
        
    elif(n == 3 or n == 4):
        print(1)
        
    else:
        p = int(log(n, 2))
        ans = 2**p - (p + 1)
        
        ans += (n - 2**p)
        print(ans)