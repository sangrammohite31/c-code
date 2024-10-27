def min_string_factor(X, Y, S, R):
    n, m = len(X), len(Y)
    
    # Reversed Y
    Y_rev = Y[::-1]
    
    # Initialize dp array, with a large value (infinity) for unachievable states
    dp = [float('inf')] * (n + 1)
    
    # Base case: to form an empty prefix of X, no substrings are required
    dp[0] = 0
    
    # Iterate over every prefix of X
    for i in range(n):
        # Try forming X[0:i+1] by selecting substrings from Y
        for j in range(i+1):
            if X[j:i+1] in Y:  # If the substring exists in Y
                dp[i+1] = min(dp[i+1], dp[j] + S)  # Update dp with cost S for substring from Y
            if X[j:i+1] in Y_rev:  # If the substring exists in reversed Y
                dp[i+1] = min(dp[i+1], dp[j] + R)  # Update dp with cost R for substring from reversed Y
    
    # If dp[n] is still infinity, it means it's impossible to form X
    if dp[n] == float('inf'):
        return "Impossible"
    
    # Otherwise, return the minimum String Factor
    return dp[n]

# Input
X = input().strip()
Y = input().strip()
S, R = map(int, input().split())

# Output
result = min_string_factor(X, Y, S, R)
print(result)
conflictreeteam