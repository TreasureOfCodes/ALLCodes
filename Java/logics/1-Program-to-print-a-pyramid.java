/*
Code by: - Loic Leprieur.
Email: - gtsproduction2020@gmail.com
*/
/* 

This program outputs a pyramid
*
**
***
****
*****

*/

public class PyramidStars{

    public static void main(String args[]){
    
    	// a loop for changing line
		for(int i = 0; i < 5;i++){
        
			// a loop to print the number of characters for the current line
			for(int j=0;j < i;j++){							
                System.out.print("*");
			}
			System.out.println("");
		}
    }
}