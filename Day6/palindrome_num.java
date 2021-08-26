import java.util.Scanner;    // used to read input in java

class Test{   // javap test
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        String n = obj.nextLine(); // nextLine method used to read string/line
        StringBuffer nn = new StringBuffer(n); // stringbuffer has reverse method but its not string by default. we cant compare to string n directly.
        nn.reverse();
        System.out.println(n.equals(nn.toString())?"Yes":"No");
    }
}