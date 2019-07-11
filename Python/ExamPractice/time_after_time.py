import math

seconds = int(input("Enter the number of seconds since the epoch: "))

minutes = seconds // 60
seconds = seconds - (minutes * 60)

hours = minutes // 60
minutes = minutes - hours * 60

days = hours // 24
hours = hours - days * 24

months = days // 30
days = days  - months * 30

years = months // 12
months = months - years * 12

years += 1970

print("Year: {} Month: {} Day {} | {:02d}:{:02d}:{:02d}".format(years, months, days, hours, minutes, seconds))
