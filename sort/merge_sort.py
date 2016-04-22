def mergesort(nums):
	print('Spliting',nums)
	if len(nums)>1:
		mid=len(nums)//2
		#copy and create a new list to lefthalf
		lefthalf=nums[:mid]
		#copy and create a new list to righthalf
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
	print('Merging',nums)

nums=[54,26,93,17,77,31,44,55,20]
mergesort(nums)
print(nums)