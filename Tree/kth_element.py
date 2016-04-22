class TreeNode(object):
	def __init__(self,x):
		self.val=x
		self.right=None
		self.left=None
class Solution(object):
	def kthSmall(self,root,k):
		#as a BST, we try to traversal inorder
		ans=0
		count=0
		self.helper(root,ans,k,count)
		return ans
	def helper(self,root,ans,k,count):
		if not root:
			return 0
		self.helper(root.left,ans,k,count)
		count+=1
		if count==k:
			ans=root.val
		self.helper(root.right,res,ans,k,count)

test=Solution()
test.kthSmall(root,3)