import requests
from bs4 import BeautifulSoup

# Make a request to the website
response = requests.get("https://www.example.com")

# Create a BeautifulSoup object from the response
soup = BeautifulSoup(response.content, 'html.parser')

# Find all of the product titles on the page
product_titles = soup.find_all('h2', class_='product-title')

# Print the product titles
for product_title in product_titles:
  print(product_title.text)
