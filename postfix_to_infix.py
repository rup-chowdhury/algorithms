def isOperand(x):
    return ((x>='a' and x<='z') or
            (x>='A' and x<='Z'))

def getInfix(expression) :

    stack = []

    for loop in expression:
        if(isOperand(loop)):
            stack.insert(0, loop)

        else:
         
            operator1 = stack[0]
            stack.pop(0)
            operator2 = stack[0]
            stack.pop(0)
            stack.insert(0, "(" + operator2 + loop +
                             operator1 + ")")
             
    return stack[0]
 
# Driver Code
if __name__ == '__main__':
 
    expression = input('Enter Postfix expression : ')
    print(getInfix(expression.strip()))