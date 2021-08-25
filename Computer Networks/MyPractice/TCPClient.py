from socket import *

serverName = 'LAPTOP-U1F6LJMT'
serverPort = 12001
clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName,serverPort))
sentence = input("Enter the filename : ")
clientSocket.send(sentence.encode())

filecontents = clientSocket.recv(1024).decode()
print("Received from the server : ")
print(filecontents)
clientSocket.close()