import java.util.Scanner;    // used to read input in java

class Test{   // javap test

    static int discount(int n){
        int d,s=0;
        while(n!=0){
            d = n%10;
            if(d==2 || d==3 || d==5 || d==7)
            s=s+d;
            n=n/10;
        }
        return s;
    }
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int billamount = obj.nextInt();
        System.out.println(discount(billamount));
    }
}