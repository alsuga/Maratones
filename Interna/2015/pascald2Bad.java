//import java.io.BufferedReader;
//import java.io.InputStream;
import java.io.*;
//import java.io.OutputStream;
import java.util.Scanner;
//import java.io.BufferedWriter;

public class pascald2 {
  public static void main(String [] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    int from, to;
    int cal[] = new int[1002];
    cal[0] = 1;
    for(int i = 1; i <= 1001; i++)
      cal[i] = (cal[i-1] * 2) % 1000007;
    while(true) {
      from = sc.nextInt();
      to = sc.nextInt();
      if(from + to < 0)
        break;
      int res = cal[to+1] - 1 ;
      if(from == 0)
        System.out.println(res);
      else {
        int res2 = cal[from] - 1;
        System.out.println( ((res - res2) + 1000007) % 1000007);
      }
    }
  }
}

