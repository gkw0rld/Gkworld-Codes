# We will look at how to open a file and read or write a file
f = open('some_file.txt', 'w')
f.write("This file is created by third_code.py file because some_file was not present during the opening of the file by the python")
f.close()