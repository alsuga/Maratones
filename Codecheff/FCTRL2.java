import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.StringTokenizer;

public class FCTRL2{
	public static void main(String [] args) throws IOException {
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    int in,search;
	    BigInteger fact[] = new BigInteger[100];
	    BigInteger tmp = BigInteger.ONE;
	    fact[0] = tmp;
	    for(int i = 1; i< 100; i++){
	    	tmp = tmp.add(BigInteger.ONE);
	    	fact[i] = fact[i-1].multiply(tmp);
	    }
	    in  = Integer.parseInt(br.readLine());
	    while(in > 0){
	    	in -= 1;
	    	search = Integer.parseInt(br.readLine());
	    	System.out.println(fact[search-1]);
	    }
	}
}