def likes(names):
    result = ""
    if len(names) == 0:
        result = "no one likes this"
    if len(names) == 1:
        result = "{} likes this".format(names[0])
    if len(names) == 2:
        result = "{} and {} like this".format(names[0], names[1])
    if len(names) == 3:
        result = "{}, {} and {} like this".format(names[0], names[1], names[2])
    if len(names) >=4:
        result = "{}, {} and {} others like this".format(names[0], names[1], len(names) - 2)
    return result
