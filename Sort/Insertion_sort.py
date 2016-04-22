def insertion_sort(nums):
	for i in range(1,len(nums)):
		temp=nums[i]
		j=i
		while j>0 and temp<nums[j-1]:
			nums[j]=nums[j-1]
			j-=1
		nums[j]=temp

nums=[54,26,93,17,77,31,44,55,20]
insertion_sort(nums)
print(nums)

#The shell sort, sometimes called the “diminishing increment sort,” 
#improves on the insertion sort by breaking the original list
#into a number of smaller sublists, 
#each of which is sorted using an insertion sort. 

