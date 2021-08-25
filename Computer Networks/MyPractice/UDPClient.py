from socket import *

serverName = "127.0.0.1"
serverPort = 12000
ClientSocket = socket(AF_INET, SOCK_DGRAM)

sentence = input("Enter the filename : ")

ClientSocket.sendto(sentence.encode(), (serverName, serverPort))

filecontents, serverAddress = ClientSocket.recvfrom(2048)

print("Received from Server : ")
print(filecontents.decode())

ClientSocket.close()