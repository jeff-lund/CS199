import turtle 

angle = 180 - 180 / 5
window = turtle.Screen()
window.setup(400, 400)

t = turtle.Turtle()
t.speed(2)
t.penup()
t.backward(50)
t.pendown()

t.color("forest green")
t.begin_fill()
c = 0
while c < 5:
    t.forward(200)
    t.right(180 - 180 / 5)
    c += 1
t.end_fill()

window.exitonclick()
