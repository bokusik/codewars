def unique_in_order(sequence):
    return [char for i, char in enumerate(sequence) if i == 0 or char != sequence[i - 1]]