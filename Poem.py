import random

# Define a list of words
words = ["love", "hate", "joy", "sadness", "anger", "fear"]

# Generate a random poem
poem = ""
for i in range(10):
  # Choose a random word from the list
  word = random.choice(words)

  # Add the word to the poem
  poem += word + " "

# Print the poem
print(poem)
