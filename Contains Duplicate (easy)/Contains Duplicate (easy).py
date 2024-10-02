class Solution:
    def containsDuplicate(self, nums):
      for i in range (len(nums)):
        for j in range(i + 1, len(nums)):
          if nums[i]==nums[j]:
            return True
          else:
            continue 

      return False
    


if __name__ == '__main__':
  sol = Solution()
  nums1 = [1, 2, 3, 4]
  print(sol.containsDuplicate(nums1)) 

