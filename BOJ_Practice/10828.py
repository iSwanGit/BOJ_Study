class Stack(object):
    data = []
    def Push(self, a):
        self.data.append(a)
    def Pop(self):
        if len(self.data) == 0: return -1
        p= self.data[-1]
        del(self.data[-1])
        return p
    def Top(self):
        if len(self.data) == 0: return -1
        return self.data[-1]
    def Size(self):
        return len(self.data)
    def Empty(self):
        if len(self.data) > 0:
            return 0
        else: return 1

n= int(input())
stack= Stack()
for i in range(0, n):
    cmd= input()
    cmd= cmd.split(' ')
    if cmd[0] == 'push':
        stack.Push(cmd[1])
    elif cmd[0] == 'pop':
        print(stack.Pop())
    elif cmd[0] == 'size':
        print(stack.Size())
    elif cmd[0] == 'empty':
        print(stack.Empty())
    elif cmd[0] == 'top':
        print(stack.Top())
    else: pass