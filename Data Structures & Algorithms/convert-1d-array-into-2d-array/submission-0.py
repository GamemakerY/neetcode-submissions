class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        matrix = []
        i=0
        j=0
        if m*n != len(original):
            return [];
        else:
            while i<m:
                inside_list = []
                j=0
                while j<n:
                    inside_list.append(original[i*n+j])
                    j+=1
                matrix.append(inside_list)
                i+=1
            return matrix;
