class ListNode(object):
	def __init__(self,x):
		self.val=x
		self.next=None

class Solution(object):
	def reverseList(self,head):
		if head==None or head.next==None:
			return head
		pre=None
		curr=head
		while curr:
			temp=curr
			curr=curr.next
			temp.next=pre
			pre=temp
		return pre
	def printshow(self,head):
		while head:
			print(head.val)
			head=head.next
n1=ListNode(1)
n2=ListNode(2)
n3=ListNode(3)
n4=ListNode(4)
n5=ListNode(5)
n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
C=Solution()
C.printshow(n1)
new_head=C.reverseList(n1)
C.printshow(new_head)