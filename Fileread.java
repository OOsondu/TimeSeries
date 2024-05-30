import java.io.BufferedReader;
import java.util.Scanner;
import java.io.FileReader;
import java.io.File;
import java.io.IOException;
import java.io.FileNotFoundException;
public class Fileread{
   public static void main(String [] args){
   
      Scanner scan = new Scanner(System.in);
      System.out.println("enter files name");
      String filename = scan.nextLine();
   
      File inputFile= new File(filename);
      Scanner fileScan = null;
      try {
          fileScan = new Scanner(inputFile);
       }
       catch(FileNotFoundException e)
       {
          System.out.println("couldnt find " + filename+ "exit");
          System.exit(1);
       }
   
         System.out.println(fileScan.next());
      }
   
   
   }
   
   
   
   