nums=[1,1,2,2,3,4,4,5,5]
nums.reverse()
k=2
while(k>0):
    nums.append(nums[0])
    nums.remove(nums[0])
    k-=1
nums.reverse()
nums 