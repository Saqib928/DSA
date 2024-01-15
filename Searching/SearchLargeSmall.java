package Searching;

public class SearchLargeSmall {
    public static int getnumber(int number[]){
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;
        for(int i=0;i<number.length;i++){
            if(largest<number[i]){
                largest = number[i];
            }
            if(smallest>number[i]){
                smallest = number[i];
            }
        }
        System.out.println("Smallest number is : "+smallest);
        return largest;
    }
    public static void main(String[] args) {
        int number[]={2,3,4,9,7,33,44,22,5,6};
        System.out.println("The largest number is : "+getnumber(number));
    }
}
