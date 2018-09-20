orig= input()
suffix= []

for i in range(0, len(orig)):
    suffix.append(orig[i:])

suffix.sort()

for i in suffix:
    print(i)