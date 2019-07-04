import turtle

n = int(input("How many lines would you like: "))

delta = 400 / n
x = -200
y = -200
window = turtle.Screen()
window.setup(400, 400)
window.bgcolor("CadetBlue")
frank = turtle.Turtle()
frank.speed(8)
frank.hideturtle()
frank.pu()
frank.setpos(x, y)

# draw vertical lines
c = 0
while c < n - 1:
    y += delta
    frank.setpos(x, y)
    frank.pd()
    frank.setpos(-x, y)
    frank.pu()
    c += 1
c = 0
x = -200
y = -200

# draw horizontal
while c < n - 1:
    x += delta
    frank.setpos(x, y)
    frank.pd()
    frank.setpos(x, -y)
    frank.pu()
    c += 1

window.exitonclick()

