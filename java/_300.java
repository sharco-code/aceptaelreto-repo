import java.util.Scanner;

public class _300 {
    static Scanner k = new Scanner(System.in);
    static String l;
    static boolean[] v;
    
    static boolean check(boolean[] a) {
        for (int i = 0; i < a.length; i++) {
            if(!a[i]) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        int x=k.nextInt();
        k.nextLine();
        for (int i = 0; i < x; i++) {
            l=k.nextLine();
            v = new boolean[5];
            for (int j = 0; j < l.length(); j++) {
                if(l.charAt(j)=='a') {
                    if(!v[0]) v[0]=true;
                }
                if(l.charAt(j)=='e') {
                    if(!v[1]) v[1]=true;
                }
                if(l.charAt(j)=='i') {
                    if(!v[2]) v[2]=true;
                }
                if(l.charAt(j)=='o') {
                    if(!v[3]) v[3]=true;
                }
                if(l.charAt(j)=='u') {
                    if(!v[4]) v[4]=true;
                } 
            }
            if(check(v)) System.out.println("SI");
            else System.out.println("NO"); 
        }
    }
}