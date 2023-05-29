import java.io.*;
public class Main {
    public static void main(String [] args) throws IOException{
         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
         int n=0,leds=0;
         String str = "";
         n=Integer.parseInt(br.readLine());
         for (int i = 0; i < n; i++) {
             str=br.readLine();
             for (int j = 0; j < str.length(); j++) {
                if(str.charAt(j)=='0') {
                    leds+=6;
                }
                if(str.charAt(j)=='1'){
                    leds+=2;
                }
                if(str.charAt(j)=='2'){
                    leds+=5;
                }
                if(str.charAt(j)=='3'){
                    leds+=5;
                }
                if(str.charAt(j)=='4'){
                    leds+=4;
                }
                if(str.charAt(j)=='5'){
                    leds+=5;
                }
                if(str.charAt(j)=='6'){
                    leds+=6;
                }
                if(str.charAt(j)=='7'){
                    leds+=3;
                }
                if(str.charAt(j)=='8'){
                    leds+=7;
                }
                if(str.charAt(j)=='9'){
                    leds+=6;
                }
            }  
            System.out.println(leds+" leds");
            leds=0;
        }
    }
}
