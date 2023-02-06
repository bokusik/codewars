def count(string):
    result_dict = {}
    for i in string:
        result_dict[i] = string.count(i)
    return result_dict
