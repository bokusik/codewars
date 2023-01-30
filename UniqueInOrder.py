def unique_in_order(sequence):
    result = []
    for i in range(len(sequence)):
        try:
            if sequence[i] != sequence[i+1]:
                result.append(sequence[i])
        except IndexError:
            result.append(sequence[i])
    return result