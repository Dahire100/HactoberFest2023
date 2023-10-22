import smtplib
from email.mime.text import MIMEText

def send_email(sender_email, receiver_email, subject, message):
  """Sends an email from the sender to the receiver with the given subject and message."""

  msg = MIMEText(message)
  msg['Subject'] = subject
  msg['From'] = sender_email
  msg['To'] = receiver_email

  # Create a connection to the SMTP server
  server = smtplib.SMTP('smtp.example.com', 587)

  # Start TLS encryption
  server.starttls()

  # Login to the SMTP server
  server.login(sender_email, 'password')

  # Send the email
  server.sendmail(sender_email, receiver_email, msg.as_string())

  # Close the connection to the SMTP server
  server.quit()

# Send an email to the user
send_email('sender@example.com', 'receiver@example.com', 'Subject', 'Message')
