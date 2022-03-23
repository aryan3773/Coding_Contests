for u in range(int(input())):
    n = int(input())
    x = [int(w) for w in input().split()]
    
    odd = []
    even = []
    o_c = 0
    e_c = 0
    
    for i in x:
        if(i%2):
            odd.append(i)
            o_c += 1
            
        else:
            even.append(i)
            e_c += 1
            
    if((o_c == n and n%2) or (e_c == n) or (o_c == 1)):
        print(-1)
        
    else:
        if(o_c%2 == 0):
            ans = even + odd
            
        else:
            if(e_c == 1):
                ans = [odd[0]]
                ans.append(even[0])
                ans += odd[1:]
                
            else:
                ans = even[:-1] + [odd[0]] + [even[-1]] + odd[1:]
            
        print(*ans)