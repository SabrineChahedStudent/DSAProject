# DSAProject
Email System Implementation
this project is a simulation of email system using c++ programming language 

 # Graphical representation 
in this project we have three main objects which are:

# the mail server 
Mailserver is a queus of emails, it recieves emails fom inlimited number of users and process them by order first one to enter server first one to be processed and the server has also a list of users ID that are unique.

The processing consist of:
sending the email to destination and knowing immediatly if the emailhas eached or not: 
for that we use three functions function sendmailtodestination,checkifreachdestination and mailcopy.

Emails that have not reached destination will be resend under conditions :
A message is resent only if there are no new messages to be sent
If after sending a message 3 times, the mail server knows that the message has not reached
destination, then this message is destroyed and a message is sent to the message owner to notify him that his message was not sent.
for that we use functions: resendemail ,canberesend and desroy.

# UserAcount

