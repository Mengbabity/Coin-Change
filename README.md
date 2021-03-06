# Coin-Change

问题：给出硬币的面额（数组）,以及钱数，求出最少需要的硬币个数。如果不能组成，返回-1.

思路：
1.最开始的思路是回溯。每次都去尝试加最大面额的硬币，当超过钱数，再去加较小面额的，直到找到一条通路。
  但问题是，怎样确定找不到而返回-1。
  这种方法也通过了一些例子。
2.动态规划方法。一维数组dp[i]存放钱数为i时，需要的硬币数目。则结果为dp[amount].
  当硬币面额coins[j]小于钱数i时，dp[i]=min(dp[i],dp[i-coins[j]]+1),即若需要这个硬币，硬币个数就为 钱数-面额 的硬币个数+1。
注意：开始给每个dp赋初值为amount+1，若没有找到，则dp[amount]>amount，返回-1即可。
