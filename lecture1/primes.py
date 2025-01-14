from sys import argv
from math import sqrt

limit = int(argv[1])
count = 0

for n in range(2, limit + 1):
    prime = True
    root = int(sqrt(n))
    
    for d in range(2,n):
        if n % d == 0:
            prime = False
            break
        if prime:
            count += 1

print(count)            