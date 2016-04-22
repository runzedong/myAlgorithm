class TreeNode(object):
	def __init__(self,x):
		self.val=x
		self.left=None
		self.right=None
class BST(object):
	def inorder(self,root):
		res=[]
		self.helper(root,res)
		return res
	def helper(self,root):
		if not root:
			return 0
		helper(root.left,res)
		res.append(root.val)
		helper(root.right,res)