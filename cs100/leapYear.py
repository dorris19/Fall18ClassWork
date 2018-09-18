def leapYear(year):
    #Check if year is divisible by 4 (Modulo 4 will return 0 in this case)
    if(year%4==0):
        #Check if the year is also divisible by 400 (Modluo 400 will return 0)
        if(year%400==0):
            #If it is divisible by both, we've got a problem
            #return false
            return False
        #If not divisible by 400 but divisible by 4, we're good!
        return True
    #If it wasn't even divisible by 4, we return false
    return False

#Test statements
print("200 is a leap year", leapYear(200))

print("400 is a leap year", leapYear(400))

print("2000 is a leap year", leapYear(2000))

print("1000 is a leap year", leapYear(1000))
