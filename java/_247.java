import java.util.Scanner;

public class _247 {
    
    static Scanner k = new Scanner(System.in);
    
    static void f(int c) {
        int x1, x2;
        x1=k.nextInt();
        for (int i = 0; i < c-1; i++) {
            x2=k.nextInt();
            if(x1>=x2) {
                System.out.println("NO");
                k.nextLine(); 
                return;
            }
            x1=x2;
            
        }
        System.out.println("SI");
        k.nextLine();
    }
    
    public static void main(String[] args) {
        
        int c;
        do{
            c=k.nextInt();
            if(c==0) return;
            
            f(c);
            
        }while(c!=0);
        
    }
}