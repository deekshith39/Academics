import random

Environment = {'A' : 0,'B' : 0}

def printStates():
    print("[ A , B ]")
    print("[ " + str(Environment['A']) + " , " + str(Environment['B']) + " ]")

def setEnvironment():
    Environment['A'] = random.randint(0,1) #0 - clean #1 - dirt
    Environment['B'] = random.randint(0,1)

    print("New Environment : ")
    printStates()
    print()

    # if Environment['A'] == 0 and Environment['B'] == 0 :
    #     print("Both are clean!")
    #     exit(0)

def clean():
    setEnvironment()

    if Environment['A'] == 1: #dirt
        print("Vacuum Cleaner at location A")
        print("Location A is dirty!")
        printStates()
        print()
        Environment['A'] = 0
        print("Cleaned loction A")
        printStates()
        print()
        print("Moving to B")

        if Environment['B'] == 1:
            print("Vacuum Cleaner at location B")
            print("Location B is dirty!")
            printStates()
            print()
            Environment['B'] = 0
            print("Cleaned Location B")
            printStates()
            print()
        else:
            print("Vacuum Cleaner at location B")
            print("Location B is already clean!")
            #printStates()
    else:
        print("Vacuum Cleaner at location B")
        print("Location B is dirty!")
        printStates()
        print()
        Environment['B'] = 0
        print("Cleaned loction B")
        printStates()
        print()
        print("Moving to A")

        if Environment['A'] == 1:
            print("Vacuum Cleaner at location A")
            print("Location A is dirty!")
            printStates()
            print()
            Environment['A'] = 0
            print("Cleaned Location A")
            printStates()
            print()
        else:
            print("Vacuum Cleaner at location A")
            print("Location A is already clean!")
            #printStates()



def main():
    print("Vacuum Cleaner with two states ")
    #print("Initial State :")
    #printStates()
    clean()

    print()
    print("Now the environment is totally clean!")
    printStates()



if __name__ == '__main__':
    main()