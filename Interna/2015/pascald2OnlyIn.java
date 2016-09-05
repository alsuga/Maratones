//import java.io.BufferedReader;
//import java.io.InputStream;
import java.io.*;
//import java.io.OutputStream;
import java.util.StringTokenizer;
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

class Scanner{
  public BufferedReader reader;
  public StringTokenizer st;

  public Scanner(InputStream stream){
    reader = new BufferedReader(new InputStreamReader(stream));
    st = null;
  }

  public String next(){
    while(st == null || !st.hasMoreTokens()){
      try{
        String line  = reader.readLine();
        if(line == null) return null;
        st =  new StringTokenizer(line);
      }catch (Exception e){
        throw (new RuntimeException());
      }
    }
    return st.nextToken();
  }

  public int nextInt(){
    return Integer.parseInt(next());
  }
  public long nextLong(){
    return Long.parseLong(next());
  }
  public double nextDouble(){
    return Double.parseDouble(next());
  }
}
/*
class OutputWriter{
  BufferedWriter writer;

  public OutputWriter(OutputStream stream){
    writer = new BufferedWriter(new OutputStreamWriter(stream));
  }

  public void print(int i) throws IOException {
    writer.write(i + "\n");
  }

  public void print(String s) throws IOException {
    writer.write(s);
  }

  public void print(char []c) throws IOException {
    writer.write(c);
  }
  public  void close() throws IOException {
    writer.flush();
    //writer.close();
  }

}*/
