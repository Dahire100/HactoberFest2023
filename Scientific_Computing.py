import numpy as np
import matplotlib.pyplot as plt

# Define the function to be integrated
def f(x):
  return np.sin(x)

# Calculate the definite integral of f(x) from 0 to 1 using the trapezoidal rule
def trapezoidal_rule(a, b, n):
  h = (b - a) / n
  sum = 0.5 * (f(a) + f(b))
  for i in range(1, n):
    sum += f(a + i * h)
  return sum * h

# Calculate the definite integral of f(x) from 0 to 1 using Simpson's rule
def simpson_rule(a, b, n):
  h = (b - a) / n
  sum = f(a) + f(b)
  for i in range(1, n):
    if i % 2 == 0:
      sum += 2 * f(a + i * h)
    else:
      sum += 4 * f(a + i * h)
  return sum * h / 3

# Calculate the definite integral of f(x) from 0 to 1 using the trapezoidal rule with 1000 subintervals
integral_trapezoidal = trapezoidal_rule(0, 1, 1000)

# Calculate the definite integral of f(x) from 0 to 1 using Simpson's rule with 1000 subintervals
integral_simpson = simpson_rule(0, 1, 1000)

# Print the results
print("Integral using trapezoidal rule:", integral_trapezoidal)
print("Integral using Simpson's rule:", integral_simpson)

# Plot the function and the area under the curve
x = np.linspace(0, 1, 1000)
y = f(x)
plt.plot(x, y)
plt.fill_between(x, y, 0, color='green')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Definite integral of f(x) from 0 to 1')
plt.show()
