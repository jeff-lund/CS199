msg = "Enter a number (-1 to terminate): "
nums = []
n = int(input(msg))
while n != -1:
    nums.append(n)
    n = int(input(msg))

i = 0
flag = False
l = len(nums)
while i < l - 1:
    j = i + 1
    while j < l:
        if nums[i] == nums[j]:
            flag = True
        j += 1
    i += 1
if not flag:
    print("The list is unique")
else:
    print("The list is not unique")


