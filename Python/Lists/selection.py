def swap(li, a, b):
    temp = li[a]
    li[a] = li[b]
    li[b] = temp

msg = "enter a number (-1 to terminate): "
nums = []
n = int(input(msg))

while n != -1:
    nums.append(n)
    n = int(input(msg))

print(nums)
if nums:
    length = len(nums)
    left = 0
    while left < length:
        i = left
        min_elem = nums[i]
        min_ind = i
        while i < length:
            if nums[i] < min_elem:
                min_elem = nums[i]
                min_ind = i
            i += 1
        swap(nums, left, min_ind)
        left += 1
    print(nums)
