import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		HashSet<Integer> set = new HashSet<>();
		for(int i=0;i<n;i++){
		    a[i]=sc.nextInt();
		    if(!set.contains(a[i])){
		    System.out.print(a[i]+" ");
		    set.add(a[i]);
		    }
		}
		System.out.println();

	}
}
