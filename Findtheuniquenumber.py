def find_uniq(arr):    
    res = []
    for i in arr:
        if i not in res:
            res.append(i)
    if arr.count(res[1]) > arr.count(res[0]):
        return res[0]
    else:
        return res[1]