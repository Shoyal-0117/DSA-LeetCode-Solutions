// 0 ms | 19.2 MB
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        result = ''
        strs.sort()
        short_str = strs[0]
        long_str = strs[-1]
        for i in range(min(len(short_str),len(long_str))):
            if(short_str[i]!=long_str[i]):
                return result
            result += short_str[i]
        return result



        