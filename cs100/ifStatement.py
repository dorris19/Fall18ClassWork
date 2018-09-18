def addNumbers(starting, ending):
	if(starting + 2 >= ending):
		print('Numbers look really bad!')
	elif(starting > ending):
		print("Okay")
	else:
		print("Good numbers")

addNumbers(3,5)
addNumbers(5, 8)
addNumbers(8, 5)
