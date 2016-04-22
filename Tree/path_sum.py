class TreeNode(object):
	def __init__(self,x):
		self.val=x
		self.right=None
		self.left=None
class Solution(object):
	def hasPathSum(self,root,sumvalue):
		"""
		:type root:TreeNode
		:type sum:int
		:rtype: bool
		"""
		if not root:
			return False
		if root.right==None and root.left==None and sumvalue=root.val:
			return True
		return self.hasPathSum(root.right,sumvalue-root.val) or self.hasPathSum(root.root,sumvalue-root.val)