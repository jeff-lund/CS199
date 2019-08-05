import sys

if len(sys.argv) > 1:
    for arg in sys.argv:
        print(arg)
else:
    print("no arguments provided")
