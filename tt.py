def f(lst):
    if len(lst)==1:
        return lst[0]
    else:
        return max(lst[0],f(lst[1:]))

print(f([2,5,1,8,4]))