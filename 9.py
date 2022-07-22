def isPalindrome(sellf, x: int) -> bool:
    if (str(x)[::]==str(x)[::-1]):
        return True
    else:
        return False

