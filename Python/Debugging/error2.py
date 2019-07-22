'''
Take in a list of numbers for the user. Print out the numbers lower
than 5 in the order they were entered and then all the remaining
numbers in the order they were entered
'''
msg = "Enter a number (-1 to terminate): "
nums = []
n = int(input(msg))

while n != -1:
    nums.append(n)
    n = int(input(msg))

length = len(nums) - 1
while nums:
    low = []
    high = []
    if nums[length] < 5:
        low.append(nums.pop())
    if nums[length] > 5:
        high.append(nums.pop())

for num in low:
    print(num, sep=' ')
for num in high:
    print(high, sep=' ')
