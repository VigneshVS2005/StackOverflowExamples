public class StackOverflowExample {
    public static void recursiveFunction() {
        System.out.println("Stack frame added");
        recursiveFunction(); // Infinite recursion
    }
    
    public static void main(String[] args) {
        recursiveFunction();
    }
}
