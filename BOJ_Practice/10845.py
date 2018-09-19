# Queue

class Queue(object):
    data = []
    def Push(self, a):
        self.data.append(a)
    def Pop(self):
        if len(self.data) == 0: return -1
        p= self.data[0]
        del(self.data[0])
        return p
    def Front(self):
        if len(self.data) == 0: return -1
        return self.data[0]
    def Back(self):
        if len(self.data) == 0: return -1
        return self.data[-1]
    def Size(self):
        return len(self.data)
    def Empty(self):
        if len(self.data) > 0:
            return 0
        else: return 1

n= int(input())
queue= Queue()
for i in range(0, n):
    cmd= input()
    cmd= cmd.split(' ')
    if cmd[0] == 'push':
        queue.Push(cmd[1])
    elif cmd[0] == 'pop':
        print(queue.Pop())
    elif cmd[0] == 'size':
        print(queue.Size())
    elif cmd[0] == 'empty':
        print(queue.Empty())
    elif cmd[0] == 'front':
        print(queue.Front())
    elif cmd[0] == 'back':
        print(queue.Back())
    else: pass