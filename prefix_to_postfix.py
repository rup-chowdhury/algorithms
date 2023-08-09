s = input('Enter prefix expression : ')
 
# Stack for storing operands
stack = []
 
operators = set(['+', '-', '*', '/', '^'])
 
# Reversing the order
s = s[::-1]
 
# iterating through individual tokens
for loop in s:
 
    # if token is operator
    if loop in operators:
 
        # pop 2 elements from stack
        a = stack.pop()
        b = stack.pop()
 
        # concatenate them as operand1 +
        # operand2 + operator
        temp = a+b+loop
        stack.append(temp)
 
    # else if operand
    else:
        stack.append(loop)
 
# printing final output
print(*stack)