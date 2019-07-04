import turtle 

window = turtle.Screen()
t = turtle.Turtle()

t.color("forest green")
t.begin_fill()

for _ in range(5):
    t.forward(200)
    t.right(180 - 180 / 5)

t.end_fill()

window.exitonclick()
