import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int max = -63;
        
        int[][] canvas = new int[6][6];
        
        for(int i = 0; i < 6; i++){
            
            for(int j = 0; j < 6; j++){
                
                canvas[i][j] = input.nextInt();                
            }         
        }
        
        int sum = 0;
        
        for(int i = 0; i < 4; i++){
            
            for(int j = 0; j < 4; j++){
                
                
                sum += (canvas[i][j] + canvas[i][j+1] + canvas[i][j+2]);
                sum += (canvas[i+1][j+1]);
                sum += (canvas[i+2][j] + canvas[i+2][j+1] + canvas[i+2][j+2]);
                
                if(sum >= max)
                    max = sum;
                
                sum = 0;
            }           
            
        } 
        
        System.out.println(max);
        
        
        
    }
}