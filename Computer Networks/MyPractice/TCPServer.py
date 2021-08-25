from socket import *

serverName='LAPTOP-U1F6LJMT'
serverPort = 12001
serverSocket = socket(AF_INET,SOCK_STREAM) #AF_INET - Network address, SOCK_STREAM - TCP
serverSocket.bind((serverName,serverPort))
serverSocket.listen(1)
print("Waiting for requests..")
while True:
    ConnectedHostname, address = serverSocket.accept()
    print("Connection established,client socket address : ", address)
    sentence = ConnectedHostname.recv(1024).decode()  #1024 is the buffer size
    #print("Sentence : ", sentence)
    file = open(sentence,"r")
    l = file.read(1024)

    ConnectedHostname.send(l.encode())

    file.close()
    ConnectedHostname.close()



