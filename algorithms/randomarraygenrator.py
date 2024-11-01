import random
array_size=random.randint(30,1000)
print(array_size)
for i in range(10):
    array=[]
    for i in range(array_size):
        array.append(random.randint(0,100))
    print("\narray\n",array)