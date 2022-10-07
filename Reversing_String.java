public class Reversing_String {
    public static void main(String[] args) {
        String str = "abcd";
        reversal(str,str.length()-1);

    }
    public static void reversal(String reverse , int idx){
        if (idx == 0){
            System.out.print(reverse.charAt(0));
            return;
        }
        System.out.print(reverse.charAt(idx));
        reversal(reverse , idx-1);
    }
    
}
