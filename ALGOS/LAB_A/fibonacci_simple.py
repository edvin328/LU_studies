#! /bin/python3.8

# Python program for counting Fibonacci sequence  Fn =  F(n-1) + F(n-2)
# assign value "y" to the variable repeat, to start loop, which is used for repeated execution

repeat = "y"
while repeat == 'y':
    print("Hi, this is python program for counting Fibonacci sequence  Fn =  F(n-1) + F(n-2)")

    # n variable means number of terms in Fibonacci sequence
    n = int(input("Please enter the natural number of terms in Fibonacci sequence (n):"))

    # check if the natural number was inputted
    if n > 0:
        pass
    else:
        while n <= 0:
            n = int(input("You have entered incorrect number, please enter the natural number of terms in Fibonacci sequence (n):"))

    # store initial value "n" in "num_terms" variable to use it in result print
    num_terms = n
    # F0 = a = 0 -> assign value to variable a
    # F1 = b = 1 -> assign value to variable b
    a = 0
    b = 1

    # loop is used for counting Fn
    while n != 0:
        a = a+b
        b = a-b
        n = n-1

    # print the result
    print("If number of terms (n) =", num_terms, "-> Fibonacci sequence number (F", num_terms, ") =", a)
    # choose to continue or exit program
    repeat = str(input("Press 'y' if you want to continue, any other letter for exit: "))
    print()