import java.util.Scanner;    // used to read input in java

class Test{   // javap test
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        int d,n = obj.nextInt();
        boolean res = false;
        while(n!=0){
            d=n%10;
            if(d==0){
                res=true;
                break;
            }
            n=n/10;
        }
        System.out.println((res==true)?"Yes":"No");
        //                  OR                  //
        // if(res==true)
        //     System.out.println("Yes");
        // else
        //     System.out.println("No");
    }
}