def in_array(array1, array2):
    result = []
    for i in array1:
        for j in array2:
            if i in j:
                if i not in result:
                    result.append(i)
    result.sort()
    return result