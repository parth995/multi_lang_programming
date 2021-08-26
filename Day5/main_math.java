class main_math{
    static int reverse(int n){  //method(function) to calculate reverse of number
        int d,r=0;
        while(n!=0){
            d = n%10;
            r = r*10 + d;
            n = n/10;
        }
        return r;
    }
}