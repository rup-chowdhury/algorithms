def isOperator(operator):
    if operator == "+":
        return True
    if operator == "-":
        return True
    if operator == "*":
        return True
    if operator == "/":
        return True

    return False

def postfixToPrefix(postfix_expression):
    stack = []

    length = len(postfix_expression)

    for loop in range(length):
        if (isOperator(postfix_expression[loop])):
            operator1 = stack[-1]
            stack.pop()
            operator2 = stack[-1]
            stack.pop()

            temporary = postfix_expression[loop] + operator1 + operator2

            stack.append(temporary)

        else:
            stack.append(postfix_expression[loop])
        
    prefix = ""
    for loop in stack:
        prefix += loop
    return prefix

if __name__ == "__main__":

    postfix_expression = input('Enter a postfix expression : ')

    print("Prefix Expression : ", postfixToPrefix(postfix_expression))