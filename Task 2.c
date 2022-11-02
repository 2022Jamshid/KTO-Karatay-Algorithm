sum = 0
sum2 = 0

    for number in range (0,100):
        sum+=(number**2)

    for number2 in range (0,100):
        sum2+=number2
        c=sum2**2

    print("Difference",c-sum)