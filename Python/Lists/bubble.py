msg = "Enter a number (-1 to terminate): "
nums = []

n = int(input(msg))
while n != -1:
    nums.append(n)
    n = int(input(msg))

l = len(nums)
changed = True

while changed:
    changed = False
    i = 0
    j = 1
    while i < l - 1:
        if nums[j] < nums[i]:
            #nums[i], nums[j] = nums[j], nums[i]
            a = nums[i]
            nums[i] = nums[j]
            nums[j] = a
            changed = True
        i += 1
        j += 1

print(nums)
