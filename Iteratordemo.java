import java.util.*;
public class Iteratordemo{
	public static void main(String[] args) {
		int count=0;
		boolean[] isPrime=new boolean[10];
		for (int i=2;i<=9;i++) {
			isPrime[i]=true;
		}
		for (boolean e:isPrime){
			if(e)
				count++;
		}
		System.out.println("the count is "+count);
	}
}