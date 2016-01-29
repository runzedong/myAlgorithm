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
		pre=TreeNode(None)
		while root or stack:
			if root:
				stack.append(root)				
				root=root.left
			else:
				peekNode=stack[-1]
				if peekNode.right and pre!=peekNode.right:
					root=peekNode.right;
				else:
					stack.pop()
					res.append(peekNode.val)
					pre=peekNode
		return res
