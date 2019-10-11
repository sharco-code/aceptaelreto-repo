import java.util.Scanner;

public class _472 {

    public static void main(String[] args) {
        Scanner k = new Scanner(System.in);
        int d,n, cota, cotaAnt, suma;
        boolean b = false;
        while(k.hasNext()) {
            d=k.nextInt();
            n=k.nextInt();
            cotaAnt=-1;
            suma=0;
            b=true;
            for (int i = 0; i < n; i++) {
                cota=k.nextInt();
                if(cotaAnt==-1) {
                    cotaAnt=cota;
                } else {
                    if((cota-cotaAnt)>0) {
                        suma+=(cota-cotaAnt);
                        if(suma>d) {
                            b=false;
                        }
                    } else {
                        suma=0;
                    }
                    cotaAnt=cota;
                }
            }
            if(b) System.out.println("APTA");
            else System.out.println("NO APTA");
        }
        
    }
}