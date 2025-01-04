import java.util.Scanner;
public class Main {
    public static void func(int[] arr){
        int a = 1;
        while(true){
            int count = 0;
        for(int i = 0; i < 5; i++){
            if(a % arr[i] == 0) count++;
            if(count == 3){System.out.println(a); return;}
        }
        a++;
        }
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[5];
        for(int i = 0; i < 5; i++)
            numbers[i] = scanner.nextInt();
        scanner.close();
        func(numbers);
    }
}