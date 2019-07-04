import turtle

# Set up the canvas
window = turtle.Screen()
# Resize window to 400 x 400
window.setup(400, 400)
# Change background color to something prettier
window.bgcolor("CadetBlue")
# Create a turtle
frank = turtle.Turtle()
# Let frank take his time
frank.speed(1)
# Draw a square with frank
frank.penup()
# Moves to new position but will not draw
frank.setpos(50, 50)
frank.pendown()
frank.setpos(50, -50)
frank.setpos(-50, -50)
frank.setpos(-50, 50)
frank.setpos(50, 50)

# Will keep window open until you click on it, not needed on repl
window.exitonclick()
