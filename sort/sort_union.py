import time
import random
#insertion sort
def insertion(nums):
	"""
	:type list[int]
	:rtype None,sorted list in place.
	"""
	for i in range(1,len(nums)):
		j=i
		temp=nums[i]
		while j>0 and nums[j-1]>temp:
			nums[j]=nums[j-1]
			j-=1
		nums[j]=temp
#quick sort
def quicksort(nums):
	"""
	:type list[int]
	:rtype None,sorted list in place.
	"""
	quicksorthelper(nums,0,len(nums)-1)
def quicksorthelper(nums,start,end):
	if start<end:
		splitpoint=partition(nums,start,end)
		quicksorthelper(nums,start,splitpoint-1)
		quicksorthelper(nums,splitpoint+1,end)
def partition(nums,start,end):
	pivot=nums[start]
	index=start
	for i in range(start+1,end+1):
		if nums[i]<=pivot:
			index+=1
			nums[index],nums[i]=nums[i],nums[index]
	nums[start],nums[index]=nums[index],nums[start]
	return index
#merge sort
def mergesort(nums):
	"""
	:type list[int]
	:rtype None,sorted list in place.
	"""
	if len(nums)>1:
		mid=len(nums)//2
		lefthalf=nums[:mid]
		righthalf=nums[mid:]
		mergesort(lefthalf)
		mergesort(righthalf)
		i,j,k=0,0,0
		while i<len(lefthalf) and j<len(righthalf):
			if lefthalf[i]<righthalf[j]:
				nums[k]=lefthalf[i]
				i+=1
				k+=1
			else:
				nums[k]=righthalf[j]
				j+=1
				k+=1
		while i<len(lefthalf):
			nums[k]=lefthalf[i]
			i+=1
			k+=1
		while j<len(righthalf):
			nums[k]=righthalf[j]
			j+=1
			k+=1
# sort checker
def sort_checker():
	"""
	:random generate three array
	:check running time and correct the sorted array
	"""
	test1=[int(random.random()*1000) for i in range(9999)]
	test2=[int(random.random()*1000) for i in range(9999)]	
	test3=[int(random.random()*1000) for i in range(9999)]
	start1=time.time()
	insertion(test1)
	end1=time.time()
	print('insertion',end1-start1)
	start2=time.time()
	quicksort(test2)
	end2=time.time()
	print('quicksort',end2-start2)
	start3=time.time()
	mergesort(test3)
	end3=time.time()
	print('mergesort',end3-start3)
	for i in range(1,9999):
		if test1[i]<test1[i-1]:
			print('opss, false, insertsort')
		if test2[i]<test2[i-1]:
			print('opss, false, quicksort')
		if test3[i]<test3[i-1]:
			print('opss, false, mergesort')
	print('test finish. correct')
#runing from here
sort_checker()