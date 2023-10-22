# Create a turtle object
turtle = turtle.Turtle()

# Draw a square
turtle.forward(100)
turtle.right(90)
turtle.forward(100)
turtle.right(90)
turtle.forward(100)
turtle.right(90)
turtle.forward(100)

# Draw a triangle
turtle.penup()
turtle.goto(-50, -50)
turtle.pendown()
turtle.forward(100)
turtle.right(120)
turtle.forward(100)
turtle.right(120)
turtle.forward(100)

# Draw a circle
turtle.penup()
turtle.goto(0, 0)
turtle.pendown()
turtle.circle(50)

# Write a message
turtle.penup()
turtle.goto(-100, 100)
turtle.pendown()
turtle.write("Hello, world!", font=("Arial", 16, "normal"))

# Keep the window open until the user clicks the close button
turtle.done()
