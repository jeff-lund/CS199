import turtle
window = turtle.Screen()

t = turtle.Turtle()
t.color("orange")

x = 0
y = 100
delta = 10
t.begin_fill()
t.pencolor('red')
t.forward(200)
t.left(170)
while(abs(t.pos()) >= 1):
    t.forward(200)
    t.left(170)
t.end_fill()
window.exitonclick()
