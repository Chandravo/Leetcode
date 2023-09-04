def sumSquare(n):
    sum = 0
    while n != 0:
        rem = n % 10
        sum += rem * rem
        n = n // 10
    return sum

def isHappy(n):
    if n == 1 or n == 7:
        return True
        
    while n > 9:
        n = sumSquare(n)
        if n <= 9:
            if n == 1 or n == 7:
                return True
            else:
                break
    return False

def getMaxSizeHappyNumSet(happyNumLow, happyNumHigh):
    happy_set = set()
    for i in range(happyNumLow, happyNumHigh + 1):
        if isHappy(i):
            s = str(i)
            temp = int(''.join(sorted(s)))
            happy_set.add(temp)
    return len(happy_set)


if __name__=='__main__':
    print(getMaxSizeHappyNumSet(20,35))