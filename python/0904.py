s = 'asdfljksdf'

def counter(str: str) -> dict:
    dic = {}
    for chr in str:
        dic[chr] = dic.get(chr, 0) + 1
    return dic

print(counter(s))