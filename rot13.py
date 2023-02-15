import re

def rot13(message):
    pattern1 = re.compile(r'[A-Ma-m]') 
    pattern2 = re.compile(r'[N-Zn-z]')   
    result = []
    for s in message:
        if pattern1.match(s):
            result.append(chr(ord(s) + 13))
        elif pattern2.match(s):
            result.append(chr(ord(s) - 13))
        else:
            result.append(s)
    return ''.join(result)