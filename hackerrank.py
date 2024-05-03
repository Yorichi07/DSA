def is_tprime(n):
    count=0
    for i in range(1,n+1):
        if(n%i==0):
            count+=1
    if count==3:
        return True
    return False

print(is_tprime(4))