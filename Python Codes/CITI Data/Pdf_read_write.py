import fitz #PyMuPDF

def read_from_pdf(path):
    doc = fitz.open(path)
    all_text = ""
    for page in doc:
        all_text += page.get_text()
    doc.close()    
    return all_text

extracted_text = read_from_pdf("Python Codes\Intership\sample.pdf")
print(extracted_text)

#creatinhg a new file
doc = fitz.open()

page = doc.new_page()
page.insert_text((100,100), "Hey this text is inserted into the new pdf")

doc.save("Python Codes/Intership/OutPut.pdf")
doc.close()