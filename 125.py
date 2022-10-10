def isPalindrome(s: str) -> bool:
    s=s.lower()
    print(s)
    l,r=0,len(s)-1
    while l<r:
        while (l<len(s) and (ord(s[l]) not in range(97,123) and ord(s[l]) not in range(48,58)) ):
            l+=1
        while (r>=0 and (ord(s[r]) not in range(97,123) and ord(s[r]) not in range(48,58))):
            r-=1
        if (l<r):
            print(s[l],s[r])
        if (l<r and s[l]!=s[r]):
            return False
        l+=1
        r-=1
    return True

print(isPalindrome("race a car"))