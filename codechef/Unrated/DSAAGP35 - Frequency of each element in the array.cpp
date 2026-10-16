import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int[] arr=new int[n];
		    HashMap<Integer,Integer> map = new HashMap<>();
		    for(int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		        if(map.containsKey(arr[i]))
		         map.put(arr[i],map.get(arr[i])+1);
		        else
		         map.put(arr[i],1);
		    }
		    for(int i=0;i<n;i++){
		        System.out.print(map.get(arr[i])+" ");
		    }
		   System.out.println();
		}

	}
}
