def checkBirthday(month, date):

    # version 1
    # if month=="july" and date==5:
    #     return 1
    # else:
    #     return 0

    # version 2
    return 1 if month=="july" and date==5 else 0

print(checkBirthday(input(), int(input())))