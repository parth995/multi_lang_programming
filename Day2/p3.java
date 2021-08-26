import java.util.Scanner;    // used to read input in java

class Test{   // javap test
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        if(n>=30 && n<=100){
            if(n>=30 && n<=50)
                System.out.println("D");
            else if(n>=51 && n<=60)
                System.out.println("C");
            else if(n>=61 && n<=80)
                System.out.println("B");
            else
                System.out.println("A");
        }
    }
}