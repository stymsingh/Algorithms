def isMultipleOf3(num):
    odd_count = 0
    even_count = 0
    if num < 0:
        num = -num
    if num == 0:
        return 1
    if num == 1:
        return 0
    while (num):
        if num & 1:
            odd_count += 1
        num = num >> 1

        if num & 1:
            even_count += 1
        num = num >> 1

    return isMultipleOf3(abs(odd_count - even_count))


num = 24
if (isMultipleOf3(num)):
    print(num, 'is multiple of 3')
else:
    print(num, 'is not a multiple of 3')
