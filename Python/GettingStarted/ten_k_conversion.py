# Convert 10k time to mph pace
# 1 mile = 1.609 km
# input: time in seconds
# (10 km / x seconds) = (y miles / z hours)
# (10 km / x seconds) (60 seconds / 1 minute) (60 minutes / 1 hour) (1 mile / 1.609 km)
time = float(input("Enter your race time (in seconds): "))
final_time = (10 / time) * 60 * 60 * (1 / 1.609)
print("Your pace was {} mph.".format(final_time))
