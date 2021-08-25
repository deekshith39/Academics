import sys

def divide(div, n, str):
    # print(n)
    # print(len(str))
    # print(len(div))
    for i in range(n):
        x = str[i]
        for j in range(len(div)):
            if x == "1":
                if str[i+j] != div[j]:
                    str = str[0:i+j] + "1" + str[i+j+1:]
                else:
                    str = str[0:i+j] + "0" + str[i+j+1:]

    return str


def main():
    dataword = input("Enter the dataword : ")
    length = len(dataword)
    divisor = "10001000000100001"
    print("CRC generating polynomial : " + divisor)  #divisor
    zero = "0"*(len(divisor) - 1)
    #print(zero)
    dividend = dataword + zero
    print("Modified t[u] : " + dividend)
    checksum = divide(divisor, length, dividend)[length:]
    print("Checksum = " + checksum)
    codeword = dataword + checksum
    print("Final Codeword : " + codeword)
    choice = int(input("Do you want to insert erroneous data (1-Y) (0-N) : "))
    if choice:
        pos = int(input("Enter the position: "))
        if codeword[pos] == "1":
            codeword = codeword[:pos] + "0" + codeword[pos+1:]
        else:
            codeword = codeword[:pos] + "1" + codeword[pos + 1:]
        print("Erroneous data : " + codeword )
        syndrome = divide(divisor, length, codeword)
        print("Syndrome : " + syndrome)
        print("Error detected!")
    else:
        syndrome = divide(divisor, length, codeword)
        print("Syndrome : " + syndrome)
        print("No Error!")


if __name__ == '__main__':
    main()