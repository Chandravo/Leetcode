def romanToInt(s: str) -> int:
    dict={
        'M':1000,
        'D':500,
        'C':100,
        'L':50,
        'X':10,
        'V':5,
        'I':1
    }
    res=0
    for i in range(len(s)):
        if (i>=1 and dict[s[i]]>dict[s[i-1]]):
            continue
        
        elif (i<len(s)-1 and dict[s[i+1]]>dict[s[i]]):
            res=res+dict[s[i+1]]-dict[s[i]]
            
        else:
            res=res+dict[s[i]]
    return res


print(romanToInt('MMMCMXLIX'))