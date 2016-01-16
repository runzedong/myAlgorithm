columlist=[1,3,0,2]
for i in range(4):
	strpattern=''
	for j in range(4):
		if j==columlist[i]:
			strpattern+='Q'
		else:
			strpattern+='.'
	