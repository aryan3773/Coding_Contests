from math import ceil

for u in range(int(input())):
    n = int(input())
    s = input()
    
    ans = 0
    t = 1
    for i in range(1, n):
        if(s[i] == s[i-1]):
            t += 1
        
        else:
            ans += ceil(t/2)
            t = 1
            
    if(t):
        ans += ceil(t/2)
        
    print(ans)