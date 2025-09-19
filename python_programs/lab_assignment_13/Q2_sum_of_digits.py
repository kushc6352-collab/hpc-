# Q 2: Write a python program to find the sum of all integers greater than 100 and less than 200.

sumi=0
for i in range(101,200):
    sumi+=i

print("the sum from 100 to 200 is ", sumi)    

print("----------------------------------------------")

total = sum(range(101, 200))
print("The sum of integers greater than 100 and less than 200 is", total)

print("----------------------------------------------")
r = range(5)
print(type(r))          # <class 'range'>
print(type(list(r)))          # [0, 1, 2, 3, 4]
print(sum(r))           # 10

