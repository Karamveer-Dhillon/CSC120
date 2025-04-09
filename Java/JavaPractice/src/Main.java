import java.util.Scanner;
public class Main {
    static int add(int a,int b) {
        return a + b;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Create a Scanner object

        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt(); // Read first integer

        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt(); // Read second integer

        int result = add(num1, num2); // Call the method with dynamic input
        System.out.println("The sum is: " + result);

        scanner.close(); // Good practice to close the Scanner
    }
}
