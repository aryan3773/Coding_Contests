# Partially Solved

def gcd(x, y):
    if(y == 0):
        return x
    return gcd(y, x%y)

for u in range(int(input())):
    n, q = map(int, input().split())
    x = [int(w) for w in input().split()]
    
    g = [[0]*n for j in range(n)]
    
    for i in range(n):
        for j in range(n):
            g[i][j] = gcd(x[i], x[j])
            
    #print(g)
    for uu in range(q):
        l, r = map(int, input().split())
        l -= 1
        r -= 1
        
        ans = 1
        for i in range(l, r+1):
            for j in range(i+1, r+1):
                ans = max(ans, g[i][j])
                
        print(ans)