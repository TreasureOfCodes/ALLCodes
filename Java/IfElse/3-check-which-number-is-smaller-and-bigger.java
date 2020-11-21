/*
Code by: - Loic Leprieur.
Email: - gtsproduction2020@gmail.com
*/

/* Check which number is smaller and bigger */

public class IfElseCode{

    public static void main(String args[]){
		int smallNumber = 1;
		int bigNumber = 100;
		
		// Statement to test which number is smaller
		if(smallNumber < bigNumber){
			System.out.println(smallNumber + " is smaller than " + bigNumber);
		} 
		else 
		{
			System.out.println(bigNumber + " is smaller than " + smallNumber);
		}
    }
}