# Now we will read the contents of some_file
f = open('some_file.txt', 'r')    #open returns the file object that we must store in a variable
file_content = f.read()       # this will read the content of the some_file and store that in file_content variable in the form of string
f.close()                   # not we must close the file for not reaching the limit

# now we can use the content of the file by using file_content variable

print(file_content)

# Another method to read the file is :-

print("\nAnother method to read and print a file is: -")

with open('some_file.txt','r') as f:
    print(f.read(2))
    print(f.read(4))
    print(f.read(10))
    print(f.read())