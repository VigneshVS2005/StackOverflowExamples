import sys

sys.setrecursionlimit(10**6)  # Increase recursion limit (not recommended)

def recursive_function():
    print("Stack frame added")
    recursive_function()  # Infinite recursion

recursive_function()
