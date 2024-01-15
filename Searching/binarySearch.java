package Searching;
import java.util.Arrays;
public class binarySearch {
    public static int Bsearch(int number[],int key){
        int start = 0; int end = number.length-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(number[mid]==key){
                return mid;
            }
            if(number[mid] < key){
               start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int num[] = {2,1,4,5,6,3,5,33,22,345,89,99};
        int key = 4;
        Arrays.sort(num);
        for(int i=0;i<num.length;i++){
            System.out.print(num[i]+" ");
        }
        System.out.println();
        System.out.println("key found at index : "+ Bsearch(num,key));
    }
}
