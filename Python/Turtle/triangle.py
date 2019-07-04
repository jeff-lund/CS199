import turtle

n = int(input("Enter a number: "))

window = turtle.Screen()
window.setup(600, 600)
window.bgcolor("CadetBlue")
input()
t = turtle.Turtle()
t.speed(2)
t.hideturtle()

x = -200
y = 300
delta = 500 / n
t.pu()
t.setpos(x, y)
while y > -200 - delta - delta:
    t.pd()
    t.setpos(x, -200)
    t.pu()
    t.setpos(-200, y)
    x += delta
    y -= delta
    
window.exitonclick()
