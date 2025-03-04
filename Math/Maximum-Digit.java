import java.util.Scanner;
class Maxdigit{
    public static void main(String[] args) {
      int arr[]=new int[10];
      Scanner sc=new Scanner(System.in);
       for(int i=0;i<10;i++){
         arr[i]=sc.nextInt();
       }
        int max=arr[0];
        for(int i:arr){
            if(max<i){
                max=i;
            }
        }
        System.out.print(max);
        
    }
}
