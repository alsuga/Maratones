import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner cp=new Scanner(System.in);
		BigInteger p[]=new BigInteger[100000];
		int n=cp.nextInt();
		int q=cp.nextInt();
		int i=0;
		BigInteger ac=0;
		while(n>0){
			
			if(i!=0) p[i]=ac.add(cp.nextBigInteger());
			i++;
			ac=p[i];
			n--;
		}
		while(q>0)
		{
			int tempo=cp.nextInt();
			if(tempo-1<p[1]) System.out.println(1);
			for(int j=n-1;j>1;j--){
				if(p[j]==(tempo)-1) System.out.println(j+1);
			}		
		}


	}
		


}

