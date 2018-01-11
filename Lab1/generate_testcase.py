import random

n = random.randint(10**4,5*10**4)
print(n)
arr = []
i = 0
while i < n:
	tmp = str(random.randint(10**4,10**6))
	if tmp in arr:
		continue
	print(tmp)
	arr.append(tmp)
	i += 1