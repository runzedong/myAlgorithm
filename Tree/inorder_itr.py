class TreeNode(object):
	"""docstring for TreeNode"""
	def __init__(self, x):
		self.val=x
		self.right=None
		self.left=None
class Solution(object):
	def preoder(self,root):
		res=[]
		if not root:
			return res
		stack=[]
		while root or stack:
			if root:
				stack.append(root)				
				root=root.left
			else:
				root=stack.pop()
				res.append(root.val)
				root=root.right
		return res
