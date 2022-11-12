def leastBricks(self, wall):
        d={}
        for i in wall:
            s=0
            for j in i[:-1]:
                s+=j
                d[s]=d.get(s,0)+1
        return len(wall)-max(d.values())