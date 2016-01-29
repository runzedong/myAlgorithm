class TreeNode(object):
	def __init__(self,x):
		self.val=x
		self.right=None
		self.left=None
class Solution(object):
	def postorder(self,root):
		res=[]
		self.helper(root,res)
		return res
	def helper(self,root,res):
		if not root:
			return 0
		helper(root.left,res)
		res.append(root.val)
		helper(root.right,res)
