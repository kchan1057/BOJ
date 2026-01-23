import java.util.*;
public class Main {
    public static void main(String[] args){
       Scanner sc = new Scanner(System.in);
       int[] arr = new int[3];
       for(int i = 0; i < 3; i++){
            arr[i] = sc.nextInt();
       }
       if(arr[2]-arr[1] <= 0 ) System.out.println("-1");
       else {
            int ans = arr[0]/(arr[2] - arr[1]) + 1;
            System.out.println(ans);
       }
    }
}