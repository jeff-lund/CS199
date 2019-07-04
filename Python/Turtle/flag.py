import turtle

def rectangle(t, n, m):
    dirs = [n, m, n, m]
    for i in range(4):
        t.forward(dirs[i])
        t.left(90)
        


window = turtle.Screen()
window.setup(400, 400)

colors = ["red", "yellow", "lawn green"]
t = turtle.Turtle()
t.hideturtle()
x = -50
y = 50
for i in range(3):
    t.pu()
    t.setpos(x, y)
    t.pd()
    t.color(colors[i])
    t.begin_fill()
    rectangle(t, 50, 100)
    t.end_fill()
    x += 50
    
window.exitonclick()
