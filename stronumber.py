def isstronumber(num):
	dic={"0":"0","1":"1","6":"9","8":"8","9":"6"}
	i=0
	j=len(num)-1
	print(dic)
	while i<=j:
		print('i is',i)
		print('j is',j)
		if num[i] in dic and dic[num[i]]==num[j]:
			i+=1
			j-=1
			print('now i ',i)
			print('now j ',j)
			continue
		else:
			return False
	return True

def main():
	num="818"
	if isstronumber(num):
		print(True)
	else:
		print(False)

main()
