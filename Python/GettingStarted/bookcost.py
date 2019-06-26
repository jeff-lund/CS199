cost = 24.95
discount = 0.60
shipping_first = 3
shipping = 0.75
num_books = 60

total_cost = (shipping_first + (cost * discount)) + (((num_books - 1) * shipping) + (num_books - 1) * cost * discount)

#print("Total cost of", num_books, "is $", total_cost, ".")
print("Total cost of {} books is ${:.2f}.".format(num_books, total_cost))
