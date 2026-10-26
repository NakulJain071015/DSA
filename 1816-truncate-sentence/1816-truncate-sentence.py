class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        cnt = 0
        ans = ""
        for i in range(len(s)):
            if(s[i] == ' '):
                cnt += 1

            if(cnt < k):
                ans += s[i]

        return ans


