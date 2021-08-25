import random

environment = {'A': 0, 'B': 0}  # assumed initial state
cleanCount = {'A': 0, 'B': 0}

def setEnvironment():
    environment['A'] = random.randint(0, 1)
    environment['B'] = random.randint(0, 1)

    print("\nNew environment: ", end="")
    print(environment)

def printStates():
    print("[ A , B ]")
    print("[ " + str(environment['A']) + " , " + str(environment['B']) + " ]")
    print()


def newState(current):
    setEnvironment()
    cleanAt(current)


def cleanAt(state):
    print("\nVaccum cleaner at " + state + " location.")
    dirt = environment[state]  # 0-nodirt 1-dirt

    if dirt == 1:
        if cleanCount[state] == 2:
            print("Cleaned two times at " + state + " location.")
            exit(0)
        cleanCount[state] += 1
        print("Location " + state + " is dirty.")
        printStates()
        print("Vaccum cleaner cleaned the dirt at " + state + ".")
        environment[state] = 0
        printStates()
    else:
        print("Location " + state + " is clean.")
        printStates()

    if state == 'A':
        if environment['B']:
            print("Vaccum cleaner moving to B location.")
            cleanAt('B')
    else:
        if environment['A']:
            print("Vaccum cleaner moving to A location.")
            cleanAt('A')

    print("\nCurrent environment: ", end="")
    print(environment)

    newState(state)


def start():
    print("Enter starting state(A,B): ", end="")
    current = input()
    newState(current)


if __name__ == "__main__":
    start()