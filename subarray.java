class Test
{
    static int arr[] = new int[]{1, 2, 3, 4};
      
    static void subArray( int n)
    {
        for (int i=0; i <n; i++)
        {
            for (int j=i; j<n; j++)
            {
                for (int k=i; k<=j; k++)
                    System.out.print(arr[k]+" ");
            }
        }
    }
    public static void main(String[] args) 
    {
        System.out.println("All Non-empty Subarrays");
        subArray(arr.length);
          
    }
}
