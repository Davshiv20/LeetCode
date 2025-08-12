class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        for i in range(n):
            for j in range(i+1,n):
                temp = matrix[i][j]
                matrix[i][j]=matrix[j][i]
                matrix[j][i]=temp

                

        for i in range(n):
            j = n-1
            l =0 
            while(l<j):
                temp = matrix[i][l]
                matrix[i][l]=matrix[i][j]
                matrix[i][j]=temp
                l=l+1
                j=j-1
            
        return matrix
            