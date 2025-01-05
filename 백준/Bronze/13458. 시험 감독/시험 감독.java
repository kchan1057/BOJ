import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new int[a];
        for(int i = 0; i < a; i++)
            arr[i] = sc.nextInt();
        int b = sc.nextInt(); int c = sc.nextInt();
        sc.close();
        long count = 0; count += a;
        for(int i = 0; i < a; i++)
            arr[i] -= b;
        
        for(int i = 0; i < a; i++){
            if(arr[i] > 0 && arr[i] < c) count += 1;
            else if(arr[i] >= c){
                if(arr[i] % c != 0){
                    count += (arr[i] / c) + 1;
                }
                else count += (arr[i] / c);
            }
        }
        System.out.println(count);
    }
}