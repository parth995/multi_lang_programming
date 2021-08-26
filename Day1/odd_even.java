// execute command --> javap java.util.Scanner to see profile of particular class
import java.util.Scanner;    // Scanner class is used to read input in java
class Test{   // javap test
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        //Scanner obj = new Scanner(String); // read data from string
        //Scanner obj = new Scanner(File); // read data from file
        //float n = obj.nextFloat(); // used to read float value
        
        int n = obj.nextInt(); //used to read int value.
        
        if(n>=0){
            if(n%2==0)
                System.out.println("even number"); // used to print output in java
            else
                System.out.println("odd number"); 
        }
        else{
            System.out.println("Invalid Number");
        }
    }
}