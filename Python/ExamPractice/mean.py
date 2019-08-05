nums = []
n = int(input("Enter a number: "))
nitems = 0
summ = 0
while n != -1:
    nitems += 1
    summ += n
    if n % 2 == 0:
        nums.append(n)
    n = int(input("Enter a number: "))

#summ = 0
#for n in nums:
#    summ += n

mean = summ / nitems  # len(nums)
count = 0
for n in nums:
    if n % 2 == 0:
        if n >= mean - 10 and n <= mean + 10:
            count += 1
print(count)
