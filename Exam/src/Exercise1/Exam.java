/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exercise1;
import java.util.Scanner;

/**
 *
 * @author Tobisawa Misaki
 */
public class Exam {

    /**
     * @param args the command line arguments
     */
        public void Bank(double balance, double rate){
            Scanner sc = new Scanner(System.in);
            System.out.print("Balancey: ");
            balance = sc.nextDouble();
            System.out.print("annualInterestRate: ");
            rate = sc.nextDouble();
            double interest ;
            interest = balance * ( rate /1200);
            System.out.println("Interest: " + interest);
        }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Exam interest = new Exam();
        
        interest.Bank(0, 0);
    }
}
