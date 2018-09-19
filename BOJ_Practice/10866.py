# deq

class Deque(object):
    data = []
    def Push_back(self, a):
        self.data.append(a)
    def Push_front(self, a):
        self.data.insert(0, a)
    def Pop_back(self):
        if len(self.data) == 0: return -1
        p= self.data[-1]
        del(self.data[-1])
        return p
    def Pop_front(self):
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
deq= Deque()
for i in range(0, n):
    cmd= input()
    cmd= cmd.split(' ')
    if cmd[0] == 'push_front':
        deq.Push_front(cmd[1])
    elif cmd[0] == 'push_back':
        deq.Push_back(cmd[1])
    elif cmd[0] == 'pop_front':
        print(deq.Pop_front())
    elif cmd[0] == 'pop_back':
        print(deq.Pop_back())
    elif cmd[0] == 'size':
        print(deq.Size())
    elif cmd[0] == 'empty':
        print(deq.Empty())
    elif cmd[0] == 'front':
        print(deq.Front())
    elif cmd[0] == 'back':
        print(deq.Back())
    else: pass