package bayejid;

import java.util.Scanner;
/*Scanner class in Java is found in the java.util package. Java provides 
various ways to read input from the keyboard, the java.util.Scanner class is one of them.*/
import java.util.*;
/*Java util package contains collection framework, collection classes, 
classes related to date and time, event model, internationalization, and
miscellaneous utility classes. On importing this package, you can access
all these classes and methods.*/

public class Push_Pop {
    //making a public class...also the file name will be "class_name.java"
     
    public static void main(String[] args) {
        Stack<Integer> STACK = new Stack<Integer>();
        //Creating a stack to show push, pop and peek operation
        
           System.out.println("Pushed element: "+STACK.push(10));
           System.out.println("Pushed element: "+STACK.push(20));
           System.out.println("Pushed element: "+STACK.push(30));
           System.out.println("Pushed element: "+STACK.push(40));
           //Used push() to add elements in the stack
           
           //It will take integer inputs from the user
           Scanner scan = new Scanner(System.in);
           
           //This will show user the options
           System.out.print("\n1.Peek\n2.POP\n3.View Stack\nEnter any number: ");

            // This method reads the number provided using keyboard
            int number = scan.nextInt();

            // Closing Scanner after the use
            scan.close();
            
            /*Here I am using a swith case statement to take user's choice 
            from keyboard input and show them what they wants to see */
            
            switch(number){
                //Peek will show the top value from the stack
                case 1:
                System.out.println("The top element is " + STACK.peek());
                break;
                
                //Pop will remove the top element from the stack
                case 2:
                System.out.println("Popped element: " +STACK.pop());
                    System.out.println("After 1st pop the Stack: "+STACK);
                System.out.println("Popped element: " +STACK.pop());
                    System.out.println("After 2nd pop the Stack: "+STACK);
                System.out.println("Popped element: " +STACK.pop());
                    System.out.println("After 3rd pop the Stack: "+STACK);
                System.out.println("Popped element: " +STACK.pop());
                    System.out.println("After 4th pop the Stack: "+STACK);
                
                
                break;
                
                //This will show all elements of the stack
                case 3:
                System.out.println("Full Stack : ");
                System.out.println(STACK);
                break;
           }
    }
    
}
