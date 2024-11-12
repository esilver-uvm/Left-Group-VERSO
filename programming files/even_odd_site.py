# opens numbers.html file
with open("numbers.html", "w") as f:
    # writes html header code to the file
    f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n")
    # writes html table code to the file
    f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
    # iterates through every integer 1-50
    for i in range(1, 50):
        # if number is even, it is added left column of the html table
        if i % 2 == 0:
            g.write("<tr><td>{}</td><td></td></tr>\n".format(i))
        # if number is a multiple of 3, it is added to the right column of the html table
        if i % 3 == 0:
            g.write("<tr><td></td><td>{}</td></tr>\n".format(i))
    # end tags for the html code
    f.write("</table>\n</body>\n</html>")
    
# prints the html file
with open("numbers.html"") as f:
    print(f.read())
    
