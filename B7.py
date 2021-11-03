#! /bin/python3.8
def check():
    """
    Check function: checks if inputted number is in required range
    """
    print("Hi, this is python program for finding all rational numbers in range [0,1] for which denominator doesn't exceed n.")
    # n variable means number of terms in Fibonacci sequence
    n = int(input("Please enter the natural number n<10:"))
    # check if the natural number was inputted
    if n in range(1, 10):
        pass
    else:
        while n not in range(1, 10):
            n = int(input("You have entered incorrect number, please enter the natural number n<10:"))
    return n


def rational(n):
    """
    Rational function: calculates and prints rational numbers in range [0,1] for which denominator doesn't exceed n
    """
    # loop for numenator
    for numenator in range(1, n+1):
        # loop for denominator
        for denominator in range(1, n+1):
            if denominator > numenator:
                rational = numenator/denominator
                print(rational)


# ACTION STARTS HERE
if __name__ == '__main__':
    # assign value "y" to the variable repeat, to start loop, which is used for repeated execution
    repeat = "y"
    while repeat == 'y':
        k = check()
        # print the result
        print("Rational numbers in range [0,1]:")
        rational(k)
        # choose to continue or exit program
        repeat = str(input("Press 'y' if you want to continue, any other letter for exit: "))
        print()
