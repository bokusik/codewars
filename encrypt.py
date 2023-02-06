def encrypt_this(text):
    result = ""
    buffer = ""
    mas = text.split()
    if len(text) == 1:
        return ord(text)
    
    for i in mas:
        if len(i) == 1:
            result += "{}{} ".format(ord(i[0]), i[1:][::-1])
            continue
        buffer = i[1]
        result += "{}{} ".format(ord(i[0]), i[1:].replace(i[1], i[len(i) - 1], 1))
        result = "{}{} ".format(result[0:-2],buffer)
    return result[:-1]