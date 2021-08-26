import java.util.Scanner;    // used to read input in java

class Test{   // javap test
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        int year = obj.nextInt();
        if((year%4 == 0 && year%100!=0) || year%400==0){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}