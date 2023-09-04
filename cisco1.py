res=10000000
snr = 0
laddr = 0
visited = set()
import collections
snl = {}
def solveSnakesNLaddersPro(mat, maxdice, numC, sp, ep):
    j=0
    for i in range(0,len(numC),2):
        snl[numC[i]]=numC[i+1]
        
    print(snl)
    global res 
    global snr
    global laddr
    global visited
    
    def dfs(pt, sn, ladd, dc):
        global visited
        if (pt in visited):
            
            return
        
        if (pt>mat*mat):
            return
        visited.add(pt)
        global res
        global snr
        global laddr
        if (pt==ep):   
            if res>dc:
                res = dc
                snr = sn
                laddr = ladd
        
            return
        if (pt in snl):
            print(pt)
            if snl[pt]>pt:
                dfs(snl[pt],sn,ladd+1, dc)
            else:
                dfs(snl[pt],sn+1,ladd, dc)
            return
        for i in range(1,maxdice+1):
            dfs (pt+i, sn,ladd, dc+1)
        return
            
    # dfs(sp,0,0,0)
    # return [res,laddr,snr]
        
        board.reverse()                                     #  <–– convert the board to 1D list
        for i in range(1,len(board),2): board[i].reverse()
        arr = [None]+list(chain(*board))                    #  <–– add an initial element (None) 
                                                            #      to make indexing simpler
                                                            
        n, queue, seen, ct = len(arr)-1, deque([1]), {1}, 0               

        while queue:                                        #  <–– BFS search for arr[n]
            lenQ = len(queue)

            for _ in range(lenQ):                           #  <–– one level of BFS

                cur = queue.popleft()
                if cur == n: return ct

                for i in range(cur+1, min(cur+7,n+1)):      #  <–– oiterate through the possible next moves
                    nxt = arr[i] if arr[i]+1 else i         #  <–– determine whether snake or ladder

                    if nxt in seen: continue                #  <–– avoid revisiting positions        
                    seen.add(nxt)
                    queue.append(nxt)                       #  <–– build queue for next level
                    
            ct += 1                    
        
        return -1
if __name__=='__main__':
    print (solveSnakesNLaddersPro(3,2,[1,4,3,8,7,1], 2, 1))
    
    
    
def snakesAndLadders(self, board: List[List[int]]) -> int:
        n = len(board)
        def label_to_position(label):
            r, c = divmod(label-1, n)
            if r % 2 == 0:
                return n-1-r, c
            else:
                return n-1-r, n-1-c
            
        seen = set()
        queue = collections.deque()
        queue.append((1, 0))
        while queue:
            label, step = queue.popleft()
            r, c = label_to_position(label)
            if board[r][c] != -1:
                label = board[r][c]
            if label == n*n:
                return step
            for x in range(1, m):
                new_label = label + x
                if new_label <= n*n and new_label not in seen:
                    seen.add(new_label)
                    queue.append((new_label, step+1))
        return -1
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
def solveSnakesNLaddersPro(mat, maxdice, numC, sp, ep):