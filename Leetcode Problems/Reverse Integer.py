class Solution:
    def reverse(self, x: int) -> int:
        y=str(x)
        if y[0]=="-":
            y=int("-"+str(x)[1::][::-1])
            if y in range(-(2**31),(2**31)):
                return y
            else:
                return 0
        else:
            y=int(str(x)[::-1])
            if y in range(-(2**31),(2**31)):
                return y
            else:
                return 0