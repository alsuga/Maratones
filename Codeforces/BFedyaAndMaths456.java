import java.io.*;
import java.util.StringTokenizer;
import java.math.BigInteger;

public class Main {

    public static void main(String []args) throws IOException {
        Scanner in = new Scanner(System.in);
        OutputWriter out = new OutputWriter(System.out);
        Task solver = new Task();
        solver.solve(in, out);
        out.close();    
    }
}

class Task{
    public void solve(Scanner in, OutputWriter cout) throws IOException {
        BigInteger a,b,c,p,mod,out;
        a = new BigInteger("2");
        b = new BigInteger("3");
        c = new BigInteger("4");
        mod = new BigInteger("5");
        p = new BigInteger(in.next());
        out = new BigInteger("1");
        out = out.add(a.modPow(p,mod));
        out = out.add(b.modPow(p,mod));
        out = out.add(c.modPow(p,mod));
        out = out.mod(mod);
        cout.print(out.toString());
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

class OutputWriter{
    BufferedWriter writer;

    public OutputWriter(OutputStream stream){
        writer = new BufferedWriter(new OutputStreamWriter(stream));
    }

    public void print(int i) throws IOException {
        writer.write(i);
    }

    public void print(String s) throws IOException {
        writer.write(s);
    }

    public void print(char []c) throws IOException {
        writer.write(c);
    }
    public  void close() throws IOException {
        writer.close();
    }

}