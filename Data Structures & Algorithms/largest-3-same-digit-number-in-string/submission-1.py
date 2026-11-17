class Solution:
    def largestGoodInteger(self, num: str) -> str:
        biggest_num = -1
        for i in range(0, len(num)-2):
            substring = num[i:i+3]
            print(substring)
            if(substring[0]==substring[1]==substring[2]):
                if int(substring[0]) > biggest_num:
                    biggest_num = int(substring[0])
        
        if biggest_num != -1:
            return str(biggest_num)*3
        else:
            return ""

        