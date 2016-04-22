import java.util.*;
public class PriorityQ{
	static class PQcomparator implements Comparator<Integer>{
		public int compare(Integer a, Integer b){
			return b-a;
		}
	}
	public static void main(String[] args) {
		//PQorder pqorder=new PQorder();
		PriorityQueue<Integer> queue=new PriorityQueue<Integer>(10, new PQcomparator());
		for(int i=20;i>0;i--){
			queue.add(i);
		}
		while(!queue.isEmpty()){
			System.out.println(queue.poll());
		}
	}
}