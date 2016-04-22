
import java.lang.*;
import java.util.*;
/**
 *A runnable that transfer money from an account to another
 */
public class TransferRunnable implements Runnable{
	private Bank bank;
	private int fromAccount;
	private double maxAccount;
	private int DELAY=10;
	public TransferRunnable(Bank b, int from, double max){
		bank=b;
		fromAccount=from;
		maxAccount=max;
	}
	public void run(){
		try{
			while (true){
				int toAccount=(int) (bank.size()*Math.random());
				double amount= maxAccount*Math.random();
				bank.transfer(fromAccount,toAccount,amount);
				Thread.sleep((int) (DELAY*Math.random()));
			}
		}
		catch(InterruptedException e){
		}
	}
}
