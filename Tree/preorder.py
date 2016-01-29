# root-> left -> right
class TreeNode(object):
	def __init__(self,x):
		self.val=x
		self.left=None
		self.right=None

class Solution(object):
	def preorder(self, root):
		"""
		:type root: TreeNode
		:rtye: List[int]
		"""
		res=[]
		self.helper(root,res);
		return res;

	def helper(self,root,res):
		"""
		:type root:TreeNode
		:type res:list[int]
		"""
		if root==None:
			return 0;
		res.append(root.val)
		self.helper(root.left,res)
		self.helper(root.right,res)