def move_zeros(lst):
    for i in lst:
        if i == 0:
            lst.remove(i)
            lst.append(0)
    return lst