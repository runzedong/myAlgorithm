class Solution(object):
	def solveNQueens(self,n):
	    """
	    :type n: int
	    :rtype: List[List[str]]
	    """
	    res=[]#store result string
	    row=0#start from row0.
	    columlist=[None]*n#column number for each row.
	    self.helper(n,row,columlist,res)
	    return len(res)
	def helper(self,n,row,columlist,res):
	    if row==n:
	    	tempres=[]
	    	for i in range(n):
	    		strpattern=''
	    		for j in range(n):
	    			if j==columlist[i]:
	    				strpattern+='Q'
	    			else:
	    				strpattern+='.'
	    		tempres.append(strpattern)
	    	res.append(tempres)
	    	return None
	    for i in range(n):
	    	columlist[row]=i
	    	if self.checker(row,columlist):
	    		self.helper(n,row+1,columlist,res)
	def checker(self,row,columlist):
	    for i in range(row):
	    	if columlist[i]==columlist[row] or abs(row-i)==abs(columlist[row]-columlist[i]):
	    		return False
	    return True


def main():
	c=Solution()
	n=4
	receiver=c.solveNQueens(4)
	print(receiver)
main()
