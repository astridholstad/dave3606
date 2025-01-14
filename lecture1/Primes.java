package lecture1;

public class Primes {
    public static void main(String[] args) {
        int last = Integer.parseInt(args[0]);
        int count = 0;

        for(int n; n <= last; n++){
            boolean.prime = true;
            int root = (int) Math.sqrt(n);

            for(int d= 2; d < root; d++){
                if(n % d == 0){
                    prime = false;
                    break;
                }
            }
            if(prime){count++;}
        }
        System.out.println(count);
    }
    
}
