import java.util.Scanner;    // used to read input in java

class Test{   // javap test
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        System.out.println(++n);
    }
}