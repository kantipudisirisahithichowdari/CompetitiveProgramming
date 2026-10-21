import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            long peo=0;
            int c=0;
            int n=sc.nextInt();
            long m=sc.nextLong();
            int[] j=new int[n];
            for(int i=0;i<n;i++) {
                j[i]=sc.nextInt();
            }
            Arrays.sort(j);
            for (int i=0; i<n;i++) {
                long np=peo+j[i];
                long hs=np*(np-1)/2;
                if(hs<=m){
                    peo=np;
                    c++;
                }else{
                break;
                }
            }
            System.out.println(c);
        }
	}
}
