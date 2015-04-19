//import java.io.BufferedReader;
import java.io.IOException;
//import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;
//import java.util.StringTokenizer;

public class Pascal {
  public static void main(String [] args) throws IOException {
    //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    Scanner sc = new Scanner(System.in);
    int from, to;
    while(true) {
      from = sc.nextInt();
      to = sc.nextInt();
      if(from + to < 0)
        break;
      int calc[] = new int[1002];
      BigInteger tmp = new BigInteger("2");
      BigInteger md = new BigInteger("1000007");
      calc[0] = 1;
      for(int i = 1; i <= 1000; i++) {
        calc[i] = (calc[i-1] + (tmp.modPow( new BigInteger(Integer.toString(i)), md).intValue())) % 1000007;
        //calc[i] = calc[i].mod(md);
      }
      if(from == 0)
        System.out.println(calc[to]);
      else
        System.out.println( (calc[to] - calc[from-1] + 1000007) % 1000007);
    }
  }
}
