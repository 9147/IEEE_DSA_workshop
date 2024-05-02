class Solution:
    def maxArea(self, height: List[int]) -> int:
        area=0
        l=0
        c=len(height)-1
        while c>l:
            area=max(area,min(height[c],height[l])*(c-l))
            if height[l]<height[c]:
                l+=1
            else:
                c-=1
        return area