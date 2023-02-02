def pick_peaks(arr):
    pos = []
    peaks = []
    flatIndex = None
    flatFirst = None
    flatFlag = False
    for i in range(1,len(arr)-1):
        if arr[i]>arr[i-1] and arr[i]>arr[i+1]:
            pos.append(i)
            peaks.append(arr[i])
        if arr[i]>arr[i-1] and arr[i]==arr[i+1]:
            flatFlag = True
            flatIndex = i
            flatFirst = arr[i]
        if arr[i]==arr[i-1] and arr[i]>arr[i+1] and flatFlag:
            pos.append(flatIndex)
            peaks.append(flatFirst)
            flatFlag = False
         
    return {"pos":pos,"peaks":peaks}

