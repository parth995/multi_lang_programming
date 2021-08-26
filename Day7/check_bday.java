import java.util.Scanner;    // used to read input in java

//version 1
// class Test{   // javap test

//     static int checkBirthday(String month, int date){
//         if((date==5) && ("july".equals(month)))
//             return 1;  // 1 is true
//         else
//             return 0; // 0 is false
//     }
//     public static void main(String[] args)
//     {
//         Scanner obj = new Scanner(System.in);
//         System.out.println(checkBirthday(obj.nextLine(), obj.nextInt()));
//     }
// }

//version 2
class Test{   // javap test

    static int checkBirthday(String month, int date){
        if((date==5) && ("july".equalsIgnoreCase(month)))    // works with case sensitive inputs comparison
            return 1;  // 1 is true
        else
            return 0; // 0 is false
    }
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        System.out.println(checkBirthday(obj.nextLine(), obj.nextInt()));
    }
}