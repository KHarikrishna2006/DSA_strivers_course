nums=[3,4,5,1,2]
if(nums==sorted(nums)):
            print(True)
else:
    for i in range(len(nums)):
        i=0
        nums.append(nums[i])
        nums.remove(nums[i])
        if(nums==sorted(nums)):
            print(True)
            break
    if(nums!=sorted(nums)):
        print(False)