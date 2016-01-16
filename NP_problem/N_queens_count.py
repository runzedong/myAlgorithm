class Solution(object):
    count=0
	def totalNQueens(self,n):
	    """
	    :type n: int
	    :rtype: List[List[str]]
	    """
	    row=0#start from row0.
	    columlist=[None]*n#column number for each row.
	    self.helper(n,row,columlist)
	    return self.count
	def helper(self,n,row,columlist):
		if row==n:
	    	self.count+=1
	    for i in range(n):
	    	columlist[row]=i
	    	if self.checker(row,columlist):
	    		self.helper(n,row+1,columlist)
	def checker(self,row,columlist):
	    for i in range(row):
	    	if columlist[i]==columlist[row] or abs(row-i)==abs(columlist[row]-columlist[i]):
	    		return False
	    return True

def main():
	c=Solution()
	n=4
	receiver=c.totalNQueens(4)
	print(receiver)
main()
