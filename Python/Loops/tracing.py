# Use tracing to find out what this code is doing?
# Assume the user input the sequence: 3 5 -4 77 -5 -12 8 0
a = 0
b = 0 
n = float(input())
while(n != 0) :
  if(n > 0) :
    a = a + 1
  if(n < 0) :
    b = b + 1
  n = float(input())
print(a)
print(b)

# a = _____  b = _____
