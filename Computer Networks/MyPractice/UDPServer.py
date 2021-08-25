from socket import *

serverName = "127.0.0.1"
serverPort = 12000
serverSocket = socket(AF_INET,SOCK_DGRAM)
serverSocket.bind((serverName, serverPort))
print("The server is ready to receive...")
while True:
    sentence, ClientAddress = serverSocket.recvfrom(2048)

    file = open(sentence.decode(),"r")
    l = file.read(2048)
    serverSocket.sendto(l.encode(),ClientAddress)
    print("sent back to client " )
    print(l)
    file.close()
    #serverSocket.close()