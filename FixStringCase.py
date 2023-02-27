def solve(s):
    lower_case = [i for i in s if i.islower()]
    upper_case = [i for i in s if i.isupper()]
    
    if len(upper_case) > len(lower_case):
        return s.upper()
    return s.lower()