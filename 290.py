class Solution(object):
    def wordPattern(self, pattern, s):
        dic = {} 
        words = s.split(' ')
		
        if len(pattern) != len(words) or len(set(pattern)) != len(set(words)): 
            return False
        for i, c in enumerate(pattern):
            if c in dic:  
                if dic[c] != words[i]: 
                    return False  
            else:
                dic[c] = words[i]
        return True