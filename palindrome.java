import java.util.*;
import java.util.Arrays; 

public class palindrome {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.println("Enter the String :");
        String str = s.nextLine();

        int n=str.length();

        char arr[]= str.toCharArray();
        char arr2[]= new char[n];

        for (int i=0;i<n;i++)
        {
            arr2[i]=arr[n-1-i];

        }

        if(Arrays.equals(arr,arr2))  //method of arrays class in java used to compare two array's elements 
        {
            System.out.println("The following String is a palindrome ");

        }

        else

        System.out.println("The following String is not a palindrome ");
        
        s.close();

        
    }
    
}
