import java.util.Scanner;    // used to read input in java

class Test{   // javap test
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int d,n = obj.nextInt(),s=0;

        while(n != 0){
        d = n%10;
        if(d==3 || d==6 || d==9){
            s = s+d;
        }
        n = n/10;
        }
        System.out.println(s);
    }
}