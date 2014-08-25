import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.StringTokenizer;

public class Main {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;

    while (true) {
      st = new StringTokenizer(br.readLine());
      BigInteger i = new BigInteger(st.nextToken());
      int j = Integer.parseInt(st.nextToken());
      if ( i.compareTo(BigInteger.ZERO) == 0 && j == 0)
        break;
      System.out.println(i.pow(j));
    }
  }
}