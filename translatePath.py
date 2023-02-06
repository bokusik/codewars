#Good luck!
def walk(path):
    count = 0
    count_simv = 1
    result = ""
    res = ""
    if path == "":
        return 'Paused'
    while(count < len(path)):
        if count + 1 == len(path):
            result += "{}:{}\n".format(path[count], count_simv)
            break
        if path[count] == path[count + 1]:
            count_simv += 1
        else:
            result += "{}:{}\n".format(path[count], count_simv)
            count_simv = 1
        count += 1
    for i in result.split():
        if i.split(":")[0] == '^':
            if int(i.split(":")[1]) > 1:
                res += "Take {} steps up\n".format(i.split(":")[1])
            if int(i.split(":")[1]) == 1:
                res += "Take {} step up\n".format(i.split(":")[1])
        if i.split(":")[0] == 'v':
            if int(i.split(":")[1]) > 1:
                res += "Take {} steps down\n".format(i.split(":")[1])
            if int(i.split(":")[1]) == 1:
                res += "Take {} step down\n".format(i.split(":")[1])
        if i.split(":")[0] == '>':
            if int(i.split(":")[1]) > 1:
                res += "Take {} steps right\n".format(i.split(":")[1])
            if int(i.split(":")[1]) == 1:
                res += "Take {} step right\n".format(i.split(":")[1])
        if i.split(":")[0] == '<':
            if int(i.split(":")[1]) > 1:
                res += "Take {} steps left\n".format(i.split(":")[1])
            if int(i.split(":")[1]) == 1:
                res += "Take {} step left\n".format(i.split(":")[1])
    return res[:-1]