import java.util.Scanner;
public class Main {
    public static void main(String [] args)  {
           Scanner leitor = new Scanner(System.in);
           int n=0;
           String charA="",charB="";
           n=leitor.nextInt();
           for (int i = 0; i < n ; i++) {
               charA=Integer.toString(leitor.nextInt());
               charB=Integer.toString(leitor.nextInt());
               if (charA.endsWith(charB)) {
                   System.out.println("encaixa");
               }
               else
                   System.out.println("nao encaixa");
        }
    } 
}
