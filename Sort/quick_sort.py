#nums[p,r,q]=>[p,r]+[r+1,q]
#p:start, q:end, r:splitpoint
def quicksort(nums):
	quicksortHelper(nums,0,len(nums)-1)

def quicksortHelper(nums,start,end):
	if start<end:
		splitpoint=partition(nums,start,end)
		quicksortHelper(nums,start,splitpoint-1)
		quicksortHelper(nums,splitpoint+1,end)

def partition(nums,start,end):
	pivot=nums[start]
	index=start
	for j in range(start+1,end+1):
		if nums[j]<=pivot:
			index+=1
			nums[index],nums[j]=nums[j],nums[index]
	nums[index],nums[start]=nums[start],nums[index]
	return index

nums=[54,26,93,17,77,31,44,55,20]
quicksort(nums)
print(nums)