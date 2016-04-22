def flip_game(s):
	res=[]
	for i in range(len(s)-1):
		if s[i]=='+' and s[i+1]=='+':
			res.append(s[:i]+'--'+s[i+2:])
	for n in res:
		print(res)
		if not flip_game(n):
			print('hey True')
			return True
	else:
		print('hey False')
		return False
def main():
	s='++++'
	print(flip_game(s))

main()