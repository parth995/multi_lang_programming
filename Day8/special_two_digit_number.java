import java.util.Scanner;    // used to read input in java

class Test{   // javap test

    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        int a,b,c;
        a = n%10;
        b = (n/10)%10;
        c = (a+b)*(a*b);
        System.out.println((n==c)?"Special":"Not");
    }
}