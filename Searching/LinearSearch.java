package Searching;

public class LinearSearch {
    public static void Lsearch(String [] menu,String key){
        for(int i=0;i<menu.length;i++){
            if(menu[i]==key){
                System.out.println("item found at number : "+i);
            }
        }
       
    }
    public static void main(String args[]){
        String menu[] ={"samosa","chole bature","coke","pizza","burger"};
        String key ="coke";
        Lsearch(menu,key);
    }
}
