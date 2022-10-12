import java.util.Scanner;
public class JAVA_01 {
    static void printInput( int [][]num,String matrix_num) {
        System.out.println(matrix_num);
        for (int i = 0; i <= num.length - 1; i++) {
            for (int j = 0; j <= num[i].length - 1; j++) {
                System.out.print(num[i][j]);
                System.out.print(" ");

            }
            System.out.println();
        }
    }
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            int[][] num1 = new int[3][3];
            int[][] num2 = new int[3][3];
            int[][] SUM = new int[3][3];
            int[][] SUB = new int[3][3];
            int[][] MUL = new int[3][3];

            String first_mat = "YOUR  FIRST MATRIX :";
            String second_mat = "YOUR  SECOND MATRIX :";
            String Sum_print = "THE  SUM OF THESE TWO MATRIX :";
            String SuB_print = "THE  SUBTRACTION OF THESE TWO MATRIX :";
            String MUL_print = "THE  MULTIPLICATION OF THESE TWO MATRIX :";
            //WORKING PROCESS
            while (true) {
                System.out.println("<--------CHOOSE YOUR MATRIX OPERATION------>");
                System.out.println("PRESS \n 1. FOR ADDITION \n 2. FOR SUBTRACTION \n 3. FOR MULTIPLICATION \n");
                int operator = input.nextInt();
                System.out.println("ENTER THE FIRST MATRIX :");
                for (int i = 0; i <= 2; i++) {
                    for (int j = 0; j <= 2; j++) {
                        num1[i][j] = input.nextInt();

                        System.out.print(" ");
                    }
                    System.out.println();
                }

                System.out.println("ENTER THE SECOND MATRIX :");
                for (int i = 0; i <= 2; i++) {
                    for (int j = 0; j <= 2; j++) {
                        num2[i][j] = input.nextInt();

                        System.out.print(" ");
                    }
                    System.out.println();
                }
                if(operator==1) {
                    // ADDITION OF THESE MATRIX
                    printInput(num1, first_mat);
                    printInput(num2, second_mat);
                    for (int i = 0; i <= 2; i++) {
                        for (int j = 0; j <= 2; j++) {
                            SUM[i][j] = num1[i][j] + num2[i][j];
                        }
                    }
                    printInput(SUM, Sum_print);
                } else if (operator==2) {
                    // SUBTRACTION OF THESE MATRIX
                printInput(num1, first_mat);
                printInput(num2, second_mat);
                for (int i = 0; i <= 2; i++) {
                    for (int j = 0; j <= 2; j++) {
                        SUB[i][j] = num1[i][j] - num2[i][j];

                    }
                }
                printInput(SUB, SuB_print);
                } else if (operator==3) {
                    // MULTIPLICATION OF THESE MATRIX
                printInput(num1, first_mat);
                printInput(num2, second_mat);
                for (int i = 0; i <= 2; i++) {
                    for (int j = 0; j <= 2; j++)
                    {
                        MUL[i][j]=0;
                        for(int k=0;k<=2;k++)
                        {
                         MUL[i][j]= MUL[i][j]+ num1[i][k] * num2[k][j]  ;
                        }
                    }
                }
                printInput(MUL, MUL_print);
                }

                System.out.println();
            }
        }


    }


