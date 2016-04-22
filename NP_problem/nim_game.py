def canwinnim(n):
	if n<=3:
		return True
	dic={}
	dic[1]=True
	dic[2]=True
	dic[3]=True
	for i in range(4,n+1):
		dic[i]= not dic[i-1] or not dic[i-2] or not dic[i-3]
	return dic[n]
def main():
	n=1348820612
	print(canwinnim(n))
main()