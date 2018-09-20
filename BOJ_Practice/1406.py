a= list(input())
cnt= int(input())
cur= len(a)
# abcd_ cur=4
# _ cur=0
# abc(d) cur= 3 >> abce(d) cur=4

for i in range(0, cnt):
    cmd= input()
    cmd= cmd.split(' ')
    if cmd[0] == 'L':
        if cur == 0: pass
        else: cur-=1
    elif cmd[0] == 'D':
        if cur == len(a): pass
        else: cur+=1
    elif cmd[0] == 'B':
        if cur == 0: pass
        else:
            cur-=1
            del(a[cur])
    elif cmd[0] == 'P':
        a.insert(cur, cmd[1])
        cur+=1
s=''
for i in a:
    s+=i
print(s)